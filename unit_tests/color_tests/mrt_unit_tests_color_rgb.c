/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_color_rgb.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 12:28:52 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 14:01:53 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/color.h"
#include <stdlib.h>
#include <stdio.h>

void	test_color(int rgb)
{
	t_rgb_percent	*p;
	int				rgb_check;

	p = mrt_color_to_percent(rgb);
	rgb_check = mrt_color_to_rgb(p);
	if (rgb == rgb_check)
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(p);
}

void	color_test(void)
{
	test_color(0xFFFFFF);
	test_color(0x000000);
	test_color(0xffffff);
	test_color(0xaaaaaa);
	test_color(0xa4f398);
}

void	mrt_unit_tests_color_rgb(void)
{
	printf("mrt_color_to_rgb: ");
	color_test();
	printf("\n\e[0m");
}
