/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_coords.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 17:32:07 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:29:20 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/unit_tests.h"
#include <stdio.h>

void	mrt_unit_tests_coords(void)
{
	printf("--- Coords Functions Tests ---\n");
	mrt_unit_tests_tuple();
	mrt_unit_tests_double();
	mrt_unit_tests_point();
	mrt_unit_tests_vector();
	mrt_unit_tests_tuple_add();
	mrt_unit_tests_tuple_subtract();
	mrt_unit_tests_tuple_negate();
	mrt_unit_tests_tuple_scale();
	mrt_unit_tests_magnitude();
	mrt_unit_tests_tuple_normalize();
	mrt_unit_tests_dot_product();
	mrt_unit_tests_cross_product();
	mrt_unit_tests_tuple_special();
	return ;
}
