/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_color.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/10 12:11:12 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 16:00:49 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/unit_tests.h"
#include <stdio.h>

void	mrt_unit_tests_color(void)
{
	printf("\n--- Color Functions Tests ---\n");
	mrt_unit_tests_color_create();
	mrt_unit_tests_color_get();
	mrt_unit_tests_color_percent();
	mrt_unit_tests_color_rgb();
	mrt_unit_tests_color_add();
	mrt_unit_tests_color_substract();
	mrt_unit_tests_color_scale();
	mrt_unit_tests_color_multiply();
}
