/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_get.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 00:15:45 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/19 17:40:53 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	mrt_color_rgb_create(int r, int g, int b)
{
	return (r << 16 | g << 8 | b);
}

int mrt_color_transarancy_get(int trgb)
{
	
}

int	mrt_color_red_get(int rgb)
{
	return (rgb & (0xFF << 16));
}

int	mrt_color_green_get(int rgb)
{
	return (rgb & (0xFF << 8));
}

int	mrt_color_blue_get(int rgb)
{
	return (rgb & (0xFF));
}
