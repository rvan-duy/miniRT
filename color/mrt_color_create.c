/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_create.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 14:36:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 14:46:00 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/color.h"
#include "../includes/error_msg.h"
#include <stdlib.h>

// Function returns a rgb_percent struct
t_rgb_percent	*mrt_color_percent_create(double r, double g, double b)
{
	t_rgb_percent	*new_rgb_percent;

	new_rgb_percent = malloc(sizeof(t_rgb_percent));
	if (!new_rgb_percent)
		mrt_error_msg(0, "Unable to allocate memory");
	new_rgb_percent->r = r;
	new_rgb_percent->g = g;
	new_rgb_percent->b = b;
	return (new_rgb_percent);
}
