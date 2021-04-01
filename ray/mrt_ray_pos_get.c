/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_color_get.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 14:35:48 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/01 12:58:06 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_coords t_vector
#include "../includes/math.h" // math functions
#include "../includes/ray.h" // t_ray

t_coords    mrt_ray_pos_get(t_ray *r, double t)
{
    t_coords    pos;

    pos = mrt_math_vector_multiply(&r->direction, t);
    mrt_math_coords_add(&pos, &r->origin);
    return (pos);
}