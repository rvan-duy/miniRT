/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_to_percent.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/10 14:17:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 17:55:19 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/error_msg.h"
#include "../includes/color.h"
#include <stdlib.h>
#include <stdio.h>

// Function turns integer RGB into a struct RGB of percentages
t_rgb_percent	*mrt_color_to_percent(int rgb)
{
	t_rgb_percent	*new_colour;
	int				red;
	int				green;
	int				blue;

	red = mrt_color_red_get(rgb);
	green = mrt_color_green_get(rgb);
	blue = mrt_color_blue_get(rgb);
	new_colour = malloc(sizeof(t_rgb_percent));
	if (!new_colour)
		mrt_error_msg(0, "Unable to allocate memory");
	new_colour->x = (double)red / 16711680;
	new_colour->y = (double)green / 65280;
	new_colour->z = (double)blue / 255;
	return (new_colour);
}
