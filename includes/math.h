/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   math.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/18 00:54:39 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/01 14:32:51 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# include "miniRT.h" // t_vector t_coords

// Advanced
double      mrt_math_magnitude_calc(t_vector *vec);
t_vector    mrt_math_norm_vector_calc(t_vector *vec, int magnitude);

// Vector & coords math
t_coords    mrt_math_vector_multiply(t_vector *v, double i);
void        mrt_math_vector_add(t_vector *v1, t_vector *v2);
void        mrt_math_coords_add(t_coords *c1, t_coords *c2);
void        mrt_math_vector_min(t_vector *v1, t_vector *v2);
void        mrt_math_coords_min(t_coords *c1, t_coords *c2);
void        mrt_math_vector_times(t_vector *v1, t_vector *v2);
void        mrt_math_coords_times(t_coords *c1, t_coords *c2);

#endif