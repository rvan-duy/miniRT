/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_color_substract.c                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:56:19 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 15:03:14 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/color.h"
#include <stdio.h>
#include <stdlib.h>

static void	color_test_1(void)
{
	t_rgb_percent	*c1;
	t_rgb_percent	*c2;
	t_rgb_percent	*c3;

	c1 = mrt_color_to_percent(mrt_color_rgb_create(100, 100, 100));
	c2 = mrt_color_to_percent(mrt_color_rgb_create(50, 50, 50));
	c3 = mrt_color_to_percent(mrt_color_rgb_create(50, 50, 50));
	mrt_color_substract(c1, c2);
	if (mrt_color_compare(c1, c3))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(c1);
	free(c2);
	free(c3);
}

static void	color_test_2(void)
{
	t_rgb_percent	*c1;
	t_rgb_percent	*c2;
	t_rgb_percent	*c3;

	c1 = mrt_color_to_percent(mrt_color_rgb_create(1, 1, 1));
	c2 = mrt_color_to_percent(mrt_color_rgb_create(1, 1, 1));
	c3 = mrt_color_to_percent(mrt_color_rgb_create(0, 0, 0));
	mrt_color_substract(c1, c2);
	if (mrt_color_compare(c1, c3))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(c1);
	free(c2);
	free(c3);
}

static void	color_test_3(void)
{
	t_rgb_percent	*c1;
	t_rgb_percent	*c2;
	t_rgb_percent	*c3;

	c1 = mrt_color_percent_create(0.9, 0.6, 0.75);
	c2 = mrt_color_percent_create(0.7, 0.1, 0.25);
	c3 = mrt_color_percent_create(0.2, 0.5, 0.50);
	mrt_color_substract(c1, c2);
	if (mrt_color_compare(c1, c3))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(c1);
	free(c2);
	free(c3);
}

void	mrt_unit_tests_color_substract(void)
{
	printf("mrt_color_substract: ");
	color_test_1();
	color_test_2();
	color_test_3();
	printf("\n\e[0m");
}
