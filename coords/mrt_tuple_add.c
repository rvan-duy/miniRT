/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_add.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 12:53:44 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:11:46 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"
#include "../includes/error_msg.h"

// Function adds tuple src to dst
void	mrt_tuple_add(t_tuple *dst, t_tuple *src)
{
	if (dst->w >= 1 && src->w >= 1)
		mrt_error_msg(0, "Cannot add a point to a point");
	dst->x += src->x;
	dst->y += src->y;
	dst->z += src->z;
	dst->w += src->w;
}
