/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   math.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/18 00:54:39 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/13 12:17:39 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# include "miniRT.h" // t_vector t_coords

// Advanced
double      mrt_math_magnitude_calc(t_vector *v, t_coords *source);
void        mrt_math_norm_vector_calc(t_vector *v, t_coords *source, int magnitude);

// Coordinates
t_coords    mrt_math_coords_create(double x, double y, double z);
t_coords    mrt_math_coords_multiply(t_coords c, double i);
t_coords    mrt_math_coords_divide(t_coords c, double i);
t_coords    mrt_math_coords_add(t_coords c1, t_coords c2);
t_coords    mrt_math_coords_min(t_coords c1, t_coords c2);
t_coords    mrt_math_coords_min_divide(t_coords c1, t_coords c2, double i);
t_coords    mrt_math_coords_times(t_coords c1, t_coords c2);

// Aspect ratio
double      mrt_math_aspect_ratio(int width, int height);

#endif