/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_vector_create.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 17:56:29 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:14:59 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"

// Function returns a tuple of vector type (w = 0)
t_tuple	*mrt_vector_2_create(double x, double y, double z)
{
	t_tuple	*new_vector;

	new_vector = mrt_tuple_create(x, y, z, 0.0);
	return (new_vector);
}
