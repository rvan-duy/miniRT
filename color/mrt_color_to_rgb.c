/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_to_rgb.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 12:22:10 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 14:44:54 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/color.h"

int	mrt_color_to_rgb(t_rgb_percent *p)
{
	int	rgb;

	rgb = mrt_color_rgb_create(p->r * 255, p->g * 255, p->b * 255);
	return (rgb);
}
