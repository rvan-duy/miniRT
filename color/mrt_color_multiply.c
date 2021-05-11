/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_multiply.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 15:54:49 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 15:58:39 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/color.h"

void	mrt_color_multiply(t_rgb_percent *dst, t_rgb_percent *src)
{
	dst->r *= src->r;
	dst->g *= src->g;
	dst->b *= src->b;
}
