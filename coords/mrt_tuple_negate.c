/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_negate.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 13:52:20 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:12:31 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"

// Function returns the opposite of a tuple
void	mrt_tuple_negate(t_tuple *src)
{
	src->x = 0 - src->x;
	src->y = 0 - src->y;
	src->z = 0 - src->z;
}
