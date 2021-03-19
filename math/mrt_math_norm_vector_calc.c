/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_math_norm_vector_calc.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/18 13:33:52 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/18 13:54:39 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_norm_vector t_vector

t_norm_vector   mrt_math_norm_vector_calc(t_vector *vec, int magnitude)
{
	t_norm_vector   norm_vector;

	norm_vector.x = (vec->head.x - vec->tail.x) / magnitude;
	norm_vector.y = (vec->head.y - vec->tail.y) / magnitude;
	norm_vector.z = (vec->head.z - vec->tail.z) / magnitude;
	return (norm_vector);
}
