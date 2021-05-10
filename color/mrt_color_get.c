/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_get.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 00:15:45 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 13:52:09 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
