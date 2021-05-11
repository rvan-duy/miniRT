/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_compare.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:17:44 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 14:43:36 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/color.h"
#include "../includes/coords.h"

// Function compares two rgb_percent values
int	mrt_color_compare(t_rgb_percent *dst, t_rgb_percent *src)
{
	if (mrt_double_compare(dst->r, src->r) && \
		mrt_double_compare(dst->g, src->g) && \
		mrt_double_compare(dst->b, src->b))
		return (1);
	return (0);
}
