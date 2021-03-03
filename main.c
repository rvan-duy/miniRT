/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 10:54:56 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/02/26 17:52:39 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "miniRT.h"
#include "mlx_linux/mlx.h"
#include "libft/libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void    my_mlx_pixel_put(t_data *v, int x, int y, int color)
{
    char *dst;

    dst = v->addr + (y * v->line_length + x * (v->bit_per_pixel / 8));
    *(unsigned int*)dst = color;
}

void    mrt_draw_cross(t_data *v, int color)
{
    int x = 0;
    int y = v->height / 2;

    while (x < v->width)
    {
        my_mlx_pixel_put(v, x, y, color);
        x++;
    }
    x = v->width / 2;
    y = 0;
    while (y < v->height)
    {
        my_mlx_pixel_put(v, x, y, color);
        y++;
    }
}

int main(void)
{
    t_data  img;

    ft_bzero(&img, sizeof(t_data));
    
    // Initializing the mlx library, can return NULL if it goes wrong.
    img.mlx = mlx_init();
    if (!img.mlx)
        return (0);

    img.width = 1920;
    img.height = 1080;
    img.win = mlx_new_window(img.mlx, img.width, img.height, "Hello World");
    img.img = mlx_new_image(img.mlx, img.width, img.height);
    img.addr = mlx_get_data_addr(img.img, &img.bit_per_pixel, &img.line_length, &img.endian);

    // Hooks
    mlx_loop_hook(img.mlx, mrt_frame_render, &img);
    // 2: KeyPress, 1L<<0: KeyPressMask
    mlx_hook(img.win, 2, 1L<<0, mrt_key_press, &img);
    mlx_hook(img.win, 6, 1L<<6, mrt_mouse_motion, &img);

    //mlx_hook(img.win, 17, (0L), close_program, &img);
    mlx_loop(img.mlx);

    return 0;
}
