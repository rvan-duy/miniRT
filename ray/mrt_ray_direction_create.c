/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_direction_create.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/06 18:04:15 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/09 17:39:11 by rvan-duy      ########   odam.nl         */
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
// horizontal:        1.777778, 0, 0
// vertical:          0, 2, 0
// origin:            0,0,0

void    mrt_ray_direction_calc(t_ray *ray, t_ray_vars *rv, t_vars *v)
{
    ray->direction = rv->lower_left_corner;
    printf("v:%f u:%f\n", rv->v, rv->u);
    mrt_print_coords(ray->direction, "1");
    mrt_print_coords(rv->viewport.horizontal, "2v1");
    mrt_print_coords(rv->viewport.vertical, "3v1");
    mrt_math_coords_multiply(&rv->viewport.horizontal, rv->u);
    mrt_math_coords_multiply(&rv->viewport.vertical, rv->v);
    mrt_print_coords(rv->viewport.horizontal, "2");
    mrt_print_coords(rv->viewport.vertical, "3");
    mrt_math_coords_add(&ray->direction, rv->viewport.horizontal);
    mrt_print_coords(ray->direction, "4");
    mrt_math_coords_add(&ray->direction, rv->viewport.vertical);
    mrt_print_coords(ray->direction, "5");
    mrt_math_coords_min(&ray->direction, &ray->origin);
    return ;
}
