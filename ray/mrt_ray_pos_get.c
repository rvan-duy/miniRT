/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_pos_get.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 14:35:48 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/09 17:47:44 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_coords t_vector
#include "../includes/math.h" // math functions
#include "../includes/ray.h" // t_ray

void    mrt_ray_pos_get(t_coords *pos, t_ray *r, double t)
{
    *pos = r->direction;
    mrt_math_coords_multiply(&pos, t);
    mrt_math_coords_add(&pos, r->origin);
    return ;
}
