/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_scale.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:53:50 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 14:55:08 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/color.h"

// Function scales a RGB percent
void	mrt_color_scale(t_rgb_percent *src, double scale)
{
	src->r *= scale;
	src->g *= scale;
	src->b *= scale;
}
