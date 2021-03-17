/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_shade_add.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 00:05:24 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/17 01:12:25 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/color.h" // get_colors

void	mrt_color_shade_add(double distance, int *rgb)
{
	double	shade;
	int		red;
	int		green;
	int		blue;

	if (distance <= 1 && distance >= 0)
	{
		shade = 1 - distance;
		red = mrt_color_red_get(*rgb) * shade;
		green = mrt_color_green_get(*rgb) * shade;
		blue = mrt_color_blue_get(*rgb) * shade;
		*rgb = red + green + blue;
	}
}
