/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_substract.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:50:55 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 14:51:13 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/color.h"

void	mrt_color_substract(t_rgb_percent *dst, t_rgb_percent *src)
{
	dst->r -= src->r;
	dst->g -= src->g;
	dst->b -= src->b;
}
