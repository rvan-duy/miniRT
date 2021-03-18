/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_math_magnitude_calc.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/18 00:16:29 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/18 01:04:30 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vector
#include <math.h> // sqrt

double  mrt_math_magnitude_calc(t_vector *vec)
{
    double x;
    double y;
    double z;
    double magnitude;

    x = vec->head.x - vec->tail.x;
    y = vec->head.y - vec->tail.y;
    z = vec->head.z - vec->tail.z;
    magnitude = sqrt((x * x) + (y * y) + (z * z));
}
