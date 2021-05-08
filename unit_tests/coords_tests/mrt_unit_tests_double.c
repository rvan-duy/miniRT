/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_double.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 17:54:26 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:21:25 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/coords.h"
#include <stdio.h>

void	double_test_1(void)
{
	if (!mrt_double_compare(0.867, 0.002))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	if (mrt_double_compare(0.000000867, 0.0000002))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	if (mrt_double_compare(2.0, 2.0))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	if (mrt_double_compare(1, 1.0000000000001))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
}

void	mrt_unit_tests_double(void)
{
	printf("mrt_double_compare: ");
	double_test_1();
	printf("\n\e[0m");
	return ;
}
