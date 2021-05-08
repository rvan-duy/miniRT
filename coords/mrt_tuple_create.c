/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_create.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 17:31:59 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 17:24:23 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"
#include "../includes/error_msg.h"
#include <stdlib.h>
#include <stdio.h>

// Function creates a tuple, w is used to check the type of tuple:
// w = 1.0 means tuple is a point (default)
// w = 0.0 means tuple is a vector
t_tuple	*mrt_tuple_create(double x, double y, double z, double w)
{
	t_tuple	*new_tuple;

	new_tuple = malloc(sizeof(t_tuple));
	if (!new_tuple)
		mrt_error_msg(0, "Unable to allocate memory");
	new_tuple->x = x;
	new_tuple->y = y;
	new_tuple->z = z;
	new_tuple->w = w;
	return (new_tuple);
}
