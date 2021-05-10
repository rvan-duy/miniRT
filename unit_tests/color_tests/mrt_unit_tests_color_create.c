/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_color_create.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/10 12:03:58 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 13:01:21 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/color.h"
#include <stdio.h>

static void	test_color(int colour1, int r, int g, int b)
{
	int	colour2;

	colour2 = mrt_color_rgb_create(r, g, b);
	if (colour1 == colour2)
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
}

static void	color_tests(void)
{
	test_color(0xFF0000, 255, 0, 0);
	test_color(0x00FF00, 0, 255, 0);
	test_color(0x0000FF, 0, 0, 255);
	test_color(0xFFFFFF, 255, 255, 255);
	test_color(0x000000, 0, 0, 0);
	test_color(0x000000, 260, 260, 260);
}

void	mrt_unit_tests_color_create(void)
{
	printf("mrt_color_rgb_create: ");
	color_tests();
	printf("\n\e[0m");
}
