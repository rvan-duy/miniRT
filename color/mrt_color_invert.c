/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_color_invert.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 01:23:10 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/17 01:41:14 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/color.h" // get_colors

void    mrt_color_invert(int *rgb)
{
    int r;
    int g;
    int b;

    r = 255 - (mrt_color_red_get(*rgb) >> 16);
    g = 255 - (mrt_color_green_get(*rgb) >> 8);
    b = 255 - mrt_color_blue_get(*rgb);
    *rgb = mrt_color_rgb_create(r, g, b);
}
