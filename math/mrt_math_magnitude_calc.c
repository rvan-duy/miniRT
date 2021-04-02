/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_math_magnitude_calc.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/18 00:16:29 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/02 20:33:47 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vector
#include <math.h> // sqrt
#include <stdio.h>

double	mrt_math_magnitude_calc(t_vector *v, t_coords *source)
{
	double	x;
	double	y;
	double	z;
	double	magnitude;

	x = v->x - source->x;
	y = v->y - source->y;
	z = v->z - source->z;
	magnitude = sqrt((x * x) + (y * y) + (z * z));
	return (magnitude);
}
