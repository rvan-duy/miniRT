/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_matrix_insert.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/12 15:01:42 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/12 15:25:17 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/matrix.h"
#include "../../includes/coords.h"
#include <stdio.h>

static int	compare(double *matrix_row, t_tuple *inserted_row)
{
	int	i;

	i = 0;
	i += mrt_double_compare(matrix_row[0], inserted_row->x);
	i += mrt_double_compare(matrix_row[1], inserted_row->y);
	i += mrt_double_compare(matrix_row[2], inserted_row->z);
	i += mrt_double_compare(matrix_row[3], inserted_row->w);
	if (i == 4)
		return (1);
	return (0);
}

static void	matrix_test(void)
{
	double	**ptr;
	t_tuple	*row_0;
	t_tuple	*row_1;
	t_tuple	*row_2;
	t_tuple	*row_3;

	ptr = mrt_matrix_create(4, 4);
	row_0 = mrt_tuple_create(1.0, 2.0, 3.0, 0.0);
	row_1 = mrt_tuple_create(2.0, 2.0, 6.0, 0.0);
	row_2 = mrt_tuple_create(3.0, 6.0, 3.0, 0.0);
	row_3 = mrt_tuple_create(4.0, 5.0, 9.0, 0.0);
	mrt_matrix_row_insert(ptr[0], row_0);
	mrt_matrix_row_insert(ptr[1], row_1);
	mrt_matrix_row_insert(ptr[2], row_2);
	mrt_matrix_row_insert(ptr[3], row_3);
	if (compare(ptr[0], row_0) && compare(ptr[1], row_1) \
	 && compare(ptr[2], row_2) && compare(ptr[3], row_3))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	mrt_matrix_free(ptr, 4);
}

void	mrt_unit_tests_matrix_insert(void)
{
	printf("mrt_matrix_row_insert: ");
	matrix_test();
	printf("\n\e[0m");
}
