/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_vars_init.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/09 16:33:10 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/13 14:52:02 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ray.h" // t_ray_vars
#include "../includes/math.h" // math functions
#include "../includes/print.h"
#include <stdio.h>

// The math behind this function is as follows:
// left_corner = origin - height/2 - vertical/2 - focal_len
static t_coords	mrt_ray_left_corner_calc(t_ray_vars *rv, t_vars *v)
{
	t_coords lower_left_corner;

	lower_left_corner = rv->camera->coords;
	lower_left_corner = mrt_math_coords_min_divide(lower_left_corner, rv->viewport.horizontal, 2);
	lower_left_corner = mrt_math_coords_min_divide(lower_left_corner, rv->viewport.vertical, 2);
	lower_left_corner = mrt_math_coords_min(lower_left_corner, rv->focal_len_coords);
	return (lower_left_corner);
}

// The height and width of the viewport are based of the aspect ratio
// The aspect ratio is calculated based on the resolution that was given by the .rt file
static t_viewport	mrt_ray_viewport_calc(t_vars *v)
{
	double		aspect_ratio;
	double		viewport_height;
	double		viewport_width;
	t_viewport	new_viewport;

	aspect_ratio = mrt_math_aspect_ratio(v->res.width, v->res.height);
	viewport_height = VIEWPORT_HEIGTH;
	viewport_width = aspect_ratio * viewport_height;
	new_viewport.horizontal = mrt_math_coords_create(viewport_width, 0, 0);
	new_viewport.vertical = mrt_math_coords_create(0, viewport_height, 0);
	return (new_viewport);
}

void	mrt_ray_vars_init(t_ray_vars *rv, t_vars *v)
{
	rv->viewport = mrt_ray_viewport_calc(v);
	rv->lower_left_corner = mrt_ray_left_corner_calc(rv, v);
	return ;
}