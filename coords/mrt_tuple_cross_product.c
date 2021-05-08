/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_cross_product.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/08 14:18:09 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 14:51:55 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"
#include "../includes/error_msg.h"

// Function returns the cross product of vector t1 and t2
t_tuple	*mrt_tuple_cross_product(t_tuple *t1, t_tuple *t2)
{
	if (!mrt_double_compare(t1->w, 0.0) || !mrt_double_compare(t2->w, 0.0))
		mrt_error_msg(0, "(mrt_tuple_cross_product) \
Tuple input has to be vector (aka w = 0)");
	return (mrt_vector_2_create(t1->y * t2->z - t1->z * t2->y, \
	t1->z * t2->x - t1->x * t2->z, t1->x * t2->y - t1->y * t2->x));
}
