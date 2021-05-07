/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_coords.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 17:32:07 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 14:01:24 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/unit_tests.h"
#include <stdio.h>

void        mrt_unit_tests_coords()
{
    printf("--- Coords Functions Tests ---\n");
    mrt_unit_tests_tuple();
    mrt_unit_tests_point();
    mrt_unit_tests_vector();
    mrt_unit_tests_tuple_add();
    mrt_unit_tests_tuple_subtract();
    mrt_unit_tests_tuple_negate();
    return ;
}
