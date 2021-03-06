/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_dot_product.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 19:06:40 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 14:51:48 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"
#include "../includes/error_msg.h"

// Function returns the dot product of vector t1 and t2
double	mrt_tuple_dot_product(t_tuple *t1, t_tuple *t2)
{
	if (!mrt_double_compare(t1->w, 0.0) || !mrt_double_compare(t2->w, 0.0))
		mrt_error_msg(0, "(mrt_tuple_dot_product) \
Tuple input has to be a vector (aka w = 0)");
	return (t1->x * t2->x + t1->y * t2->y \
	+ t1->z * t2->z + t1->w * t2->w);
}
