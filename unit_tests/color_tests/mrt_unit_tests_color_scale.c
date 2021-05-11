/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_color_scale.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 15:05:47 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 15:12:22 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/color.h"
#include "../../includes/coords.h"
#include <stdio.h>
#include <stdlib.h>

// Could add more tests
static void	color_test_1(void)
{
	t_rgb_percent	*c1;
	t_rgb_percent	*c2;

	c1 = mrt_color_percent_create(0.2, 0.3, 0.4);
	c2 = mrt_color_percent_create(0.4, 0.6, 0.8);
	mrt_color_scale(c1, 2.0);
	if (mrt_color_compare(c1, c2))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(c1);
	free(c2);
}

void	mrt_unit_tests_color_scale(void)
{
	printf("mrt_color_scale: ");
	color_test_1();
	printf("\n\e[0m");
}
