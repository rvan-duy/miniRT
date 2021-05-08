/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_subtract.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 13:17:06 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:14:01 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"
#include "../includes/error_msg.h"

// Function subtracts tuple dst with src
void	mrt_tuple_subtract(t_tuple *dst, t_tuple *src)
{
	if (dst->w == 0 && src->w >= 1)
		mrt_error_msg(0, "Cannot subtract a point from a vector");
	dst->x -= src->x;
	dst->y -= src->y;
	dst->z -= src->z;
	dst->w -= src->w;
}
