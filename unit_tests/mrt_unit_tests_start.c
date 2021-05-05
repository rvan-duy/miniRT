/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_start.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 18:04:20 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/05 18:44:35 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"
#include <stdlib.h>
#include <stdio.h>

void    mrt_unit_tests_start()
{
    t_tuple *t;

    t = mrt_tuple_create(2.2, 3.4, 6.5, 9.0);
    printf("%f %f %f %f\n", t->x, t->y, t->z, t->w);
    exit(0);
    return ;
}