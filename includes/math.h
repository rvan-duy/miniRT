/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   math.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/18 00:54:39 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/30 15:55:13 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# include "miniRT.h" // t_vector t_vector

// advanced
double      mrt_math_magnitude_calc(t_vector *vec);
t_vector    mrt_math_norm_vector_calc(t_vector *vec, int magnitude);

// Vector & Coords math
t_coords    mrt_math_vector_multiply(t_vector *v, double i);
void        mrt_math_coords_add(t_coords *v1, t_coords *v2);

#endif