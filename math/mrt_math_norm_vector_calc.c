/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_math_norm_vector_calc.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/18 13:33:52 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/02 20:27:34 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vector

void	mrt_math_norm_vector_calc(t_vector *v, t_coords *source, int magnitude)
{
	v->x = (v->x - source->x) / magnitude;
	v->y = (v->y - source->y) / magnitude;
	v->z = (v->z - source->z) / magnitude;
	return ;
}
