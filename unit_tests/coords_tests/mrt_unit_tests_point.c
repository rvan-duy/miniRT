/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_point.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 18:43:34 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:21:59 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/coords.h"
#include "../../includes/error_msg.h"
#include <stdio.h>
#include <stdlib.h>

static void	point_test(void)
{
	t_tuple	*t1;
	t_tuple	*t2;

	t1 = malloc(sizeof(t_tuple));
	if (!t1)
		mrt_error_msg(0, "Unable to allocate memory");
	t1->x = 1.2;
	t1->y = 3.4;
	t1->z = -4.500000001;
	t1->w = 1.0;
	t2 = mrt_point_create(t1->x, t1->y, t1->z);
	if (mrt_tuple_compare(t1, t2))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(t1);
	free(t2);
	return ;
}

void	mrt_unit_tests_point(void)
{
	printf("mrt_point_create: ");
	point_test();
	printf("\n\e[0m");
	return ;
}
