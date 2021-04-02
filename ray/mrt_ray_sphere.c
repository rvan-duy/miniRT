/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_sphere.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 13:08:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/02 20:21:48 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ray.h"
#include "../includes/miniRT.h"
#include "../includes/math.h"
#include <stdio.h>

// Function checks if a P collides with a sphere:
// ret < 0 if it does not collide a sphere
// ret = 0 if it collides with it only once
// ret > 0 if it collides with it twice (both sides)

static double check_collision(t_coords P, t_sphere *sphere)
{
    double radius;
    double radius_p;
    double total;

    radius = sphere->diameter / 2;
    radius = radius * radius;
    printf("radius:%f\n", radius);
    mrt_math_coords_min(&P, &sphere->coords);
    printf("x:%f y:%f z:%f\n", P.x, P.y, P.z);
    mrt_math_coords_times(&P, &P);
    total = P.x + P.y + P.z;
    printf("total:%f\n", total);
    if (total < radius)
        return (1);
    if (total == radius)
        return (0);
    if (total > radius)
        return (-1);
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