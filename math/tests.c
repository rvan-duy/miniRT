/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tests.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/31 14:12:49 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/01 12:08:20 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include "../includes/miniRT.h"
#include "../includes/math.h"

double ft_pow_2(double x)
{
    x = x * x;
    return x;
}

t_vector    create_vector(double x, double y, double z)
{
    t_vector vec;

    vec.x = x;
    vec.y = y;
    vec.z = z;
    return (vec);
}

int main()
{
    t_vector point = create_vector(0, 5, 20.6);
    t_vector center = create_vector(0, 0, 20.6);
    double diameter = 12.6;
    double radius = diameter / 2;
    double radius_p = ft_pow_2(radius);
    mrt_math_vector_min(&point, &center);
    printf("%f %f %f\n", point.x, point.y, point.z);
    mrt_math_vector_asterisks(&point, &point);
    printf("%f %f %f\n", point.x, point.y, point.z);
    printf("%f\n", point.x + point.y + point.z);
    printf("%f\n", radius_p);

    /*double D = 12.6;
    double R = D / 2;
    double R_2 = R * R;
    double sphere_center[3] = {0.0, 0.0, 20.6};
    printf("Radius: %f\n", R);
    printf("Radius^2: %f\n", R_2);
    
    double point[3] = {0.0, 0.0, 10.0};
    point[0] = ft_pow_2(point[0] - sphere_center[0]);
    point[1] = ft_pow_2(point[1] - sphere_center[1]);
    point[2] = ft_pow_2(point[2] - sphere_center[2]);
    double R_3 = point[0] + point[1] + point[2];
    printf("%f\n", R_3);*/
    
    /*double center_x = 0.0;
    double center_y = 0.0;
    double center_z = 0.0;
    double center_radius;
    double point_x = 0.1;
    double point_y = 0.1;
    double point_z = 1;
    double point_radius;

    center_radius = (center_x * center_x) + (center_y * center_y) + (center_z * center_z);
    printf("center radius: %f\n", center_radius);
    point_radius = (point_x * point_x) + (point_y * point_y) + (point_z * point_z);
    printf("point radius: %f\n", point_radius);
    if (point_radius < center_radius)
        printf("point is inside of the sphere radius\n");
    else
        printf("point is outside of the sphere radius\n");*/

    return 1;
}