/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   color.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 00:23:02 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 16:05:08 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

// RGB in percentages
typedef struct s_rgb_percent {
	double	r;
	double	g;
	double	b;
}	t_rgb_percent;

int				mrt_color_rgb_create(int r, int g, int b);
int				mrt_color_red_get(int rgb);
int				mrt_color_green_get(int rgb);
int				mrt_color_blue_get(int rgb);
int				mrt_color_rgb_create(int r, int g, int b);
t_rgb_percent	*mrt_color_percent_create(double r, double g, double b);
t_rgb_percent	*mrt_color_to_percent(int rgb);
int				mrt_color_to_rgb(t_rgb_percent *p);
void			mrt_color_add(t_rgb_percent *dst, t_rgb_percent *src);
void			mrt_color_substract(t_rgb_percent *dst, t_rgb_percent *src);
void			mrt_color_scale(t_rgb_percent *src, double scale);
void			mrt_color_multiply(t_rgb_percent *dst, t_rgb_percent *src);
int				mrt_color_compare(t_rgb_percent *dst, t_rgb_percent *src);
void			mrt_color_shade_add(double distance, int *rgb);
void			mrt_color_invert(int *rgb);

#endif