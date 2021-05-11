/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_color_percent.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/10 15:41:24 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 14:47:10 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/color.h"
#include "../../includes/coords.h"
#include <stdio.h>
#include <stdlib.h>

static void	test_color(double red, double green, double blue, int rgb)
{
	t_rgb_percent	*color;

	color = mrt_color_to_percent(rgb);
	if (mrt_double_compare(red, color->r) && \
		mrt_double_compare(green, color->g) && \
		mrt_double_compare(blue, color->b))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(color);
}

static void	color_tests(void)
{
	test_color(1, 1, 1, 0xFFFFFF);
	test_color(1, 1, 0, 0xFFFF00);
	test_color(1, 0, 1, 0xFF00FF);
	test_color(0, 1, 1, 0x00FFFF);
	test_color(0.250980, 0.529412, 0.482353, 0x40877B);
	test_color(0.250980, 0.529412, 0.345098, 0x408758);
}

void	mrt_unit_tests_color_percent(void)
{
	printf("mrt_color_to_percent: ");
	color_tests();
	printf("\n\e[0m");
}
