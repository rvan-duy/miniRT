/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_math_aspect_ratio.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/06 11:06:30 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/06 12:18:36 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

double	mrt_math_aspect_ratio(int width, int height)
{
	double	aspect_ratio;

	aspect_ratio = (double)width / (double)height;
	return (aspect_ratio);
}
