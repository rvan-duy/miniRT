/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_start.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 18:04:20 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 17:26:22 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/unit_tests.h"
#include <stdlib.h>

// there are leaks, dont forget em!

void    mrt_unit_tests_start()
{
    mrt_unit_tests_coords();
    while (1);
    exit(0);
    return ;
}