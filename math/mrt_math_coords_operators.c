/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_math_coords_operators.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 14:23:16 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/01 14:29:08 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_coords

void    mrt_math_coords_add(t_coords *c1, t_coords *c2)
{
    c1->x += c2->x;
    c1->y += c2->y;
    c1->z += c2->z;
    return ;
}

void    mrt_math_coords_min(t_coords *c1, t_coords *c2)
{
    c1->x -= c2->x;
    c1->y -= c2->y;
    c1->z -= c2->z;
    return ;
}

void    mrt_math_coords_times(t_coords *c1, t_coords *c2)
{
    c1->x *= c2->x;
    c1->y *= c2->y;
    c1->z *= c2->z;
    return ;
}
