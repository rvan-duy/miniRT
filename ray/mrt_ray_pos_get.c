/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_pos_get.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 14:35:48 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/13 14:25:54 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_coords t_vector
#include "../includes/math.h" // math functions
#include "../includes/ray.h" // t_ray

t_coords    mrt_ray_pos_get(t_ray *r, double i)
{
    t_coords    new_pos;

    new_pos = r->direction;
    new_pos = mrt_math_coords_multiply(new_pos, i);
    new_pos = mrt_math_coords_add(new_pos, r->origin);
    return (new_pos);
}
