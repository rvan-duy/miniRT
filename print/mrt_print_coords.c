/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_print_coords.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/03 00:00:35 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/06 15:25:11 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_coords
#include <stdio.h>

void    mrt_print_coords(t_coords c, char *name)
{
    p("%s: x:%f y:%f z:%f\n", name, c.x, c.y, c.z);
    return ;
}