/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ray_collision_check.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 13:50:02 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/02 20:36:09 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ray.h"
#include "../includes/miniRT.h"
#include "../includes/math.h"
#include <stdio.h>

double  mrt_ray_collision_check(t_ray *ray, t_vars *var)
{
    double      ret;
    double      t;
    t_coords    point;

    t = RAY_LEN_MIN;
    ret = -1;
    while (ret < 0 && t <= RAY_LEN_MAX)
    {
        point = mrt_ray_pos_get(ray, t);
        ret = mrt_ray_sphere(point, var->sphere);
        t += 1;
    }
    return (ret);
}
