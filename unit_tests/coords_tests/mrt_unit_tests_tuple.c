/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_tuple.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 18:14:24 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:20:35 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/coords.h"
#include "../../includes/error_msg.h"
#include <stdio.h>
#include <stdlib.h>

static void	tuple_test_1(void)
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
	t2 = mrt_tuple_create(t1->x, t1->y, t1->z, t1->w);
	if (mrt_tuple_compare(t1, t2))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(t1);
	free(t2);
	return ;
}

static void	tuple_test_2(void)
{
	t_tuple	*t1;
	t_tuple	*t2;

	t1 = malloc(sizeof(t_tuple));
	if (!t1)
		mrt_error_msg(0, "Unable to allocate memory");
	t1->x = 1.2;
	t1->y = 3.4;
	t1->z = -4.500000001;
	t1->w = 0.0;
	t2 = mrt_tuple_create(t1->x, t1->y, t1->z, t1->w);
	if (mrt_tuple_compare(t1, t2))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(t1);
	free(t2);
	return ;
}

static void	tuple_test_3(void)
{
	t_tuple	*t1;

	t1 = malloc(sizeof(t_tuple));
	if (!t1)
		mrt_error_msg(0, "Unable to allocate memory");
	t1->x = 1.2;
	t1->y = 3.4;
	t1->z = -4.500000001;
	t1->w = 1.0;
	if (mrt_tuple_compare(t1, t1))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(t1);
	return ;
}

static void	tuple_test_4(void)
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
	t2 = mrt_tuple_create(0, t1->y, t1->z, t1->w);
	if (!mrt_tuple_compare(t2, t1))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(t1);
	free(t2);
	return ;
}

void	mrt_unit_tests_tuple(void)
{
	printf("mrt_tuple_create: ");
	tuple_test_1();
	tuple_test_2();
	tuple_test_3();
	printf("\n\e[0m");
	printf("mrt_tuple_compare ");
	tuple_test_4();
	printf("\n\e[0m");
	return ;
}
