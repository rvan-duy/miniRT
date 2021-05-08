/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_tuple_scale.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 14:17:13 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:26:01 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/coords.h"
#include <stdio.h>
#include <stdlib.h>

static void	tuple_test_1(void)
{
	t_tuple	*t1;
	t_tuple	*t2;

	t1 = mrt_tuple_create(1, -2, 3, -4);
	t2 = mrt_tuple_create(3.5, -7, 10.5, -14);
	mrt_tuple_scale(t1, 3.5);
	if (mrt_tuple_compare(t1, t2))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(t1);
	free(t2);
}

static void	tuple_test_2(void)
{
	t_tuple	*t1;
	t_tuple	*t2;

	t1 = mrt_tuple_create(1, -2, 3, -4);
	t2 = mrt_tuple_create(0.5, -1, 1.5, -2);
	mrt_tuple_scale(t1, 0.5);
	if (mrt_tuple_compare(t1, t2))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(t1);
	free(t2);
}

void	mrt_unit_tests_tuple_scale(void)
{
	printf("mrt_tuple_scale: ");
	tuple_test_1();
	tuple_test_2();
	printf("\n\e[0m");
}
