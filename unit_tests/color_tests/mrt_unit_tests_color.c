/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_color.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/10 12:11:12 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 15:46:58 by rvan-duy      ########   odam.nl         */
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
}
