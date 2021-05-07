/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_magnitude.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 15:45:09 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 16:42:53 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"
#include "../includes/error_msg.h"
#include <math.h>

double	mrt_tuple_magnitude(t_tuple *src)
{
	if (src->w - 0.0 > 0.00001)
		mrt_error_msg(0, "Tuple has to be a vector in \
		order to calculate the magnitude");
	return (sqrt((src->x * src->x) + (src->y * src->y) + (src->z * src->z)));
}
