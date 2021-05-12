/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_matrix_create.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/12 13:09:25 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/12 13:45:49 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/matrix.h"
#include <stdio.h>

void	matrix_test(void)
{
	double	**ptr;

	ptr = mrt_matrix_create(4, 4);
	if (ptr && ptr[0] && ptr[1] && ptr[2] && ptr[3])
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	mrt_matrix_free(ptr, 4);
}

void	mrt_unit_tests_matrix_create(void)
{
	printf("mrt_matrix_create: ");
	matrix_test();
	printf("\n\e[0m");
}
