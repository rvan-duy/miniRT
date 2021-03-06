/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_start.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 18:04:20 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/12 13:30:25 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/unit_tests.h"
#include <stdlib.h>

void	mrt_unit_tests_start(void)
{
	mrt_unit_tests_coords();
	mrt_unit_tests_color();
	mrt_unit_tests_matrix();
	exit(1);
}
