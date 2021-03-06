/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_rgb_create.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/10 13:52:11 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 13:52:16 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	mrt_color_rgb_create(int r, int g, int b)
{
	if (r > 255 || g > 255 || b > 255)
		return (0);
	return (r << 16 | g << 8 | b);
}
