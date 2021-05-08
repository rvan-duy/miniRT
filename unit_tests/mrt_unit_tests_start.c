/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_start.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 18:04:20 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:30:27 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/unit_tests.h"
#include <stdlib.h>

// there are leaks, dont forget em!

void    mrt_unit_tests_start()
{
    mrt_unit_tests_coords();
    exit(1);
}
