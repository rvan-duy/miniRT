/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_color_get.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/10 12:55:56 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 13:13:28 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/color.h"
#include <stdio.h>

static void	test_color(int color, int rgb, int (*function)(int))
{
	if (color == function(rgb))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
}

static void	color_tests(void)
{
	test_color(0xFF0000, 0xFFFFFF, mrt_color_red_get);
	test_color(0x00FF00, 0xFFFFFF, mrt_color_green_get);
	test_color(0x0000FF, 0xFFFFFF, mrt_color_blue_get);
	test_color(0x000000, 0x000000, mrt_color_red_get);
	test_color(0x000000, 0x000000, mrt_color_green_get);
	test_color(0x000000, 0x000000, mrt_color_blue_get);
}

void	mrt_unit_tests_color_get(void)
{
	printf("mrt_color_get: ");
	color_tests();
	printf("\n\e[0m");
}
