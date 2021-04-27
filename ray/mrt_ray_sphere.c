/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_sphere.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 13:08:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/26 11:34:26 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ray.h"
#include "../includes/miniRT.h"
#include "../includes/math.h"
#include <math.h>
#include <stdio.h>

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

// 1 if hit
// 0 if exactly on border
// -1 if it doesn't hit
static int	check_collision(t_vector *v, t_sphere *sphere)
{
	double	check;
	double	radius_pow;

	check = check_point(v, &sphere->coords);
	radius_pow = (sphere->diameter / 2) * (sphere->diameter / 2);
	//printf("check:%f radios_pow:%f\n", check, radius_pow);
	if (check < radius_pow)
	{
		//printf("check:%f\n", check);
		return (1);
	}
	if (check == radius_pow)
	{
		//printf("check:%f\n", check);
		return (0);
	}
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
