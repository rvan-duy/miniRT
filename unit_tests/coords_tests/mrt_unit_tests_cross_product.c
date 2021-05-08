/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_cross_product.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/08 14:36:30 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 17:09:16 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/coords.h"
#include <stdlib.h>
#include <stdio.h>

static void	tuple_test_1(void)
{
	t_tuple	*t1;
	t_tuple	*t2;
	t_tuple	*t3;

	t1 = mrt_vector_2_create(1, 2, 3);
	t2 = mrt_vector_2_create(2, 3, 4);
	t3 = mrt_vector_2_create(-1, 2, -1);
	if (mrt_tuple_compare(mrt_tuple_cross_product(t1, t2), t3))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(t1);
	free(t2);
	free(t3);
}

static void	tuple_test_2(void)
{
	t_tuple	*t1;
	t_tuple	*t2;
	t_tuple	*t3;

	t1 = mrt_vector_2_create(1, 2, 3);
	t2 = mrt_vector_2_create(2, 3, 4);
	t3 = mrt_vector_2_create(1, -2, 1);
	if (mrt_tuple_compare(mrt_tuple_cross_product(t2, t1), t3))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(t1);
	free(t2);
	free(t3);
}

void	mrt_unit_tests_cross_product(void)
{
	printf("mrt_tuple_cross_product ");
	tuple_test_1();
	tuple_test_2();
	printf("\n\e[0m");
}
