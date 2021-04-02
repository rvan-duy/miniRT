/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_sphere.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 13:08:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/02 23:48:17 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ray.h"
#include "../includes/miniRT.h"
#include "../includes/math.h"
#include <math.h>

// Function checks if a vector collides with a sphere:
// ret < 0 if it does not collide a sphere
// ret = 0 if it collides with it only once
// ret > 0 if it collides with it twice (both sides)

static double	check_point(t_vector *v, t_coords *sphere_center)
{
	double	x;
	double	y;
	double	z;

	x = pow((v->x - sphere_center->x), 2);
	y = pow((v->y - sphere_center->y), 2);
	z = pow((v->z - sphere_center->z), 2);
	return (x + y + z);
}

static int	check_collision(t_vector *v, t_sphere *sphere)
{
	double	check;
	double	radius_pow;

	check = check_point(v, &sphere->coords);
	radius_pow = (sphere->diameter / 2) * (sphere->diameter / 2);
	if (check < radius_pow)
		return (1);
	if (check == radius_pow)
		return (0);
	if (check > radius_pow)
		return (-1);
}

int	mrt_ray_sphere(t_vector *v, t_list *list)
{
	double		ret;
	t_sphere	*sphere;

	ret = -1;
	while (list && ret < 0)
	{
		sphere = list->content;
		ret = check_collision(v, sphere);
		list = list->next;
	}
	return (ret);
}
