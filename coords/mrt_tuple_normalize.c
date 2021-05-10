/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_normalize.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 16:38:30 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 14:07:30 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"
#include "../includes/error_msg.h"

// Function normalizes a tuple
// Tuple has to be a vector (w = 0)
void	mrt_tuple_normalize(t_tuple *src)
{
	double	magnitude;

	if (!mrt_double_compare(src->w, 0.0))
		mrt_error_msg(0, "Tuple has to be a vector in \
order to be normalized");
	magnitude = mrt_tuple_magnitude(src);
	src->x /= magnitude;
	src->y /= magnitude;
	src->z /= magnitude;
}
