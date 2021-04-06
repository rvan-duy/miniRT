/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_direction_create.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/06 18:04:15 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/06 18:49:58 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include "../includes/ray.h"
#include "../includes/math.h"

// The math behind this function is as follows:
// lower_left_corner + (u * horizontal) + (v * vertical) - origin

void    mrt_ray_direction_create(t_coords corner, t_ray *ray, double u, double v, t_res *res)
{
    t_coords horizontal;
    t_coords vertical;

    horizontal = res->width;
    vertical = res->height;
    ray->direction = corner;
    
    mrt_math_coords_multiply();
}
