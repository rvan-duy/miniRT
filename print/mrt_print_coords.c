/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_print_coords.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/03 00:00:35 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/03 00:02:28 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_coords
#include <stdio.h>

void    mrt_print_coords(t_coords *c)
{
    p("x:%f y:%f z:%f\n", c->x, c->y, c->y);
    return ;
}