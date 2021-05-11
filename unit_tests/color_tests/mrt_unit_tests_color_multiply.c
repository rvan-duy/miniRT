/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_color_multiply.c                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 15:59:47 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 16:05:25 by rvan-duy      ########   odam.nl         */
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

	c1 = mrt_color_percent_create(0.2, 0.3, 0.4);
	c2 = mrt_color_percent_create(1, 1, 1);
	c3 = mrt_color_percent_create(0.2, 0.3, 0.4);
	mrt_color_multiply(c1, c2);
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

	c1 = mrt_color_percent_create(0.2, 0.3, 0.4);
	c2 = mrt_color_percent_create(2, 2, 2);
	c3 = mrt_color_percent_create(0.4, 0.6, 0.8);
	mrt_color_multiply(c1, c2);
	if (mrt_color_compare(c1, c3))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(c1);
	free(c2);
	free(c3);
}

void	mrt_unit_tests_color_multiply(void)
{
	printf("mrt_color_multiply: ");
	color_test_1();
	color_test_2();
	printf("\n\e[0m");
}
