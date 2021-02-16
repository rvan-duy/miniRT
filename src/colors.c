/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   colors.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 12:57:53 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/02/16 14:35:38 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int create_trgb(int t, int r, int g, int b)
{
    return (t << 24 | r << 16 | g << 8 | b);
}

int get_t(int trgb)
{
    return (trgb & (0xFF << 24));
}

int get_r(int trgb)
{
    return (trgb & (0xFF << 16));
}

int get_g(int trgb)
{
    return (trgb & (0xFF << 8));
}

int get_b(int trgb)
{
    return (trgb & 0xFF);
}

int add_shade(double distance, int trgb)
{
    int t;
    int sr;
    int sg;
    int sb;
    
    t = get_t(trgb);
    sr = get_r(trgb) * (1 - distance);
    sg = get_g(trgb) * (1 - distance);
    sb = get_b(trgb) * (1 - distance);
    return (create_trgb(t, sr, sg, sb));
}
