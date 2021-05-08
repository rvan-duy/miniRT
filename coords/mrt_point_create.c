/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_point_create.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 18:01:11 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:14:42 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"

// Function returns a tuple of point type (w = 1)
t_tuple	*mrt_point_create(double x, double y, double z)
{
	t_tuple	*new_point;

	new_point = mrt_tuple_create(x, y, z, 1.0);
	return (new_point);
}
