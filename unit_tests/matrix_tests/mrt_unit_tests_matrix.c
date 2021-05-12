/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_matrix.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/12 13:28:16 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/12 15:11:04 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/unit_tests.h"
#include <stdio.h>

void	mrt_unit_tests_matrix(void)
{
	printf("\n--- Matirx Function Tests ---\n");
	mrt_unit_tests_matrix_create();
	mrt_unit_tests_matrix_insert();
}
