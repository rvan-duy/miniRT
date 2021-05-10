/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_magnitude.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 15:45:09 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 14:06:38 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"
#include "../includes/error_msg.h"
#include <math.h>

// Funtion returns the magnitude of src
double	mrt_tuple_magnitude(t_tuple *src)
{
	if (!mrt_double_compare(0, src->w))
		mrt_error_msg(0, "Tuple has to be a vector in \
order to calculate the magnitude");
	return (sqrt((src->x * src->x) + (src->y * src->y) + (src->z * src->z)));
}
