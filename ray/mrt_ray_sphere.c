/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_sphere.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 13:08:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/01 14:44:14 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ray.h"
#include "../includes/miniRT.h"
#include "../includes/math.h"

// Function checks if a P collides with a sphere:
// ret < 0 if it does not collide a sphere
// ret = 0 if it collides with it only once
// ret > 0 if it collides with it twice (both sides)

static double check_collision(t_coords P, t_sphere *sphere)
{
    double radius;
    double radius_p;

    radius = sphere->diameter / 2;
    radius = radius * radius;
    mrt_math_coords_min(&P, &sphere->coords);
    mrt_math_coords_times(&P, &P);
    return (P.x + P.y + P.z);
}

double  mrt_ray_sphere(t_coords P, t_list *list)
{
    double      ret;
    t_sphere    *sphere;

    ret = -1;
    while (list && ret < 0)
    {
        sphere = list->content;
        ret = check_collision(P, sphere);
        list = list->next;
    }
    return (ret);
}