/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_direction_create.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/06 18:04:15 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/13 15:05:19 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include "../includes/ray.h"
#include "../includes/math.h"
#include "../includes/print.h"
#include <stdio.h>

// The math behind this function is as follows:
// lower_left_corner + (u * horizontal) + (v * vertical) - origin
// lower_left_corner: -1.777778, -1, -1
// u:                 0.500261
// v:                 0.500463
// horizontal:        3.55556, 0, 0
// vertical:          0, 2, 0
// origin:            0,0,0

t_vector    mrt_ray_direction_calc(t_ray *ray, t_ray_vars *rv)
{
    t_vector    direction;

    direction = mrt_math_coords_create(0, 0, 0);
    direction = mrt_math_coords_add(direction, rv->lower_left_corner);
    direction = mrt_math_coords_add(direction, mrt_math_coords_multiply(rv->viewport.horizontal, rv->u));
    direction = mrt_math_coords_add(direction, mrt_math_coords_multiply(rv->viewport.vertical, rv->v));
    direction = mrt_math_coords_min(direction, ray->origin);
    return (direction);
}
