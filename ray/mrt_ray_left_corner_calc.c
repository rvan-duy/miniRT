/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_left_corner_calc.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/06 13:54:31 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/06 17:09:12 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/math.h"
#include "../includes/miniRT.h"
#include "../includes/ray.h"
#include "../includes/print.h"
#include <stdio.h>

// The math behind this function is as follows:
// left_corner = origin - height/2 - vertical/2 - focal_len

t_coords	mrt_ray_left_corner_calc(t_vars *v, t_ray *ray)
{
	double		aspect_ratio;
	double		viewport_height;
	double		viewport_width;
	double		focal_length;
	t_coords	lower_left_corner;
	t_coords	horizontal;
	t_coords	vertical;
	t_coords	focal_len_coords;

	aspect_ratio = mrt_math_aspect_ratio(v->res.width, v->res.height);
	viewport_height = VIEWPORT_HEIGTH;
	viewport_width = aspect_ratio * viewport_height;
	horizontal = mrt_math_coords_create(viewport_width, 0, 0);
	vertical = mrt_math_coords_create(0, viewport_height, 0);
	focal_len_coords = mrt_math_coords_create(0, 0, FOCAL_LEN);
	lower_left_corner = ray->origin;
	mrt_math_coords_min_divide(&lower_left_corner, horizontal, 2);
	mrt_math_coords_min_divide(&lower_left_corner, vertical, 2);
	mrt_math_coords_min(&lower_left_corner, &focal_len_coords);
	return (lower_left_corner);
}
