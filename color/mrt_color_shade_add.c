/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_shade_add.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 00:05:24 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/17 11:00:58 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/color.h" // get_colors

void	mrt_color_shade_add(double distance, int *rgb)
{
	double	shade;
	int		r;
	int		g;
	int		b;

	if (distance <= 1 && distance >= 0)
	{
		shade = 1 - distance;
		r = (mrt_color_red_get(*rgb) >> 16) * shade;
		g = (mrt_color_green_get(*rgb) >> 8) * shade;
		b = mrt_color_blue_get(*rgb) * shade;
		*rgb = mrt_color_rgb_create(r, g, b);
	}
}
