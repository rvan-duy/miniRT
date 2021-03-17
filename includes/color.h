/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   color.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 00:23:02 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/17 00:56:01 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

int     mrt_color_rgb_create(int r, int g, int b);
int     mrt_color_red_get(int rgb);
int     mrt_color_green_get(int rgb);
int     mrt_color_blue_get(int rgb);
void    mrt_color_shade_add(double distance, int *rgb);

#endif