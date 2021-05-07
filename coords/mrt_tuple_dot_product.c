/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_dot_product.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 19:06:40 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 19:11:29 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"

double	mrt_tuple_dot_product(t_tuple *t1, t_tuple *t2)
{
	return ((t1->x * t2->x) + (t1->y * t2->y) \
	+ (t1->z * t2->z) + (t1->w * t2->w));
}
