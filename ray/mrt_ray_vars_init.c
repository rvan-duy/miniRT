/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_vars_init.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/09 16:33:10 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/09 16:56:31 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ray.h" // t_ray_vars
#include "../includes/math.h" // math functions

// The math behind this function is as follows:
// left_corner = origin - height/2 - vertical/2 - focal_len
static void	mrt_ray_left_corner_calc(t_ray_vars *rv, t_vars *v)
{
	t_coords	focal_len_coords;

	focal_len_coords = mrt_math_coords_create(0, 0, FOCAL_LEN);
	rv->lower_left_corner.x = 0;
	rv->lower_left_corner.y = 0;
	rv->lower_left_corner.z = 0;
	mrt_math_coords_min_divide(&rv->lower_left_corner, rv->viewport.horizontal, 2);
	mrt_math_coords_min_divide(&rv->lower_left_corner, rv->viewport.vertical, 2);
	mrt_math_coords_min(&rv->lower_left_corner, &focal_len_coords);
	return ;
}

// The height and width of the viewport are based of the aspect ratio
// The aspect ratio is calculated based on the resolution that was given by the .rt file
static void	mrt_ray_viewport_calc(t_viewport *port, t_vars *v)
{
	double	aspect_ratio;
	double	viewport_height;
	double	viewport_width;

	aspect_ratio = mrt_math_aspect_ratio(v->res.width, v->res.height);
	viewport_height = VIEWPORT_HEIGTH;
	viewport_width = aspect_ratio * viewport_height;
	port->horizontal = mrt_math_coords_create(viewport_width, 0, 0);
	port->vertical = mrt_math_coords_create(0, viewport_height, 0);
	return ;
}

void	mrt_ray_vars_init(t_ray_vars *rv, t_vars *v)
{
	mrt_ray_viewport_calc(&rv->viewport, v);
	mrt_ray_left_corner_calc(rv, v);
	return ;
}