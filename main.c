/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 10:54:56 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/17 10:48:10 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/miniRT.h"
#include "includes/color.h"
//#include "mlx_linux/mlx.h"
#include "mlx/mlx.h"
#include "includes/libft.h"
#include "includes/input_check.h"
#include "includes/struct_init.h"
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
    int y = v->r_height / 2;

    while (x < v->r_width)
    {
        my_mlx_pixel_put(v, x, y, color);
        x++;
    }
    x = v->r_width / 2;
    y = 0;
    while (y < v->r_height)
    {
        my_mlx_pixel_put(v, x, y, color);
        y++;
    }
}

int main(int argc, char **argv)
{
    t_data  data;
    t_vars  vars;

    // Initializing needs to be redone
    mrt_vars_init(&vars);
    ft_bzero(&data, sizeof(t_data));

    // Doing extensive input checks
    mrt_input_check(argc, argv, &vars);

    // Initializing the mlx library, can return NULL if it goes wrong.
    data.mlx = mlx_init();
    if (!data.mlx)
        return (0);

    data.r_width = 1920;
    data.r_height = 1080;
    data.win = mlx_new_window(data.mlx, data.r_width, data.r_height, "Hello World");
    data.img = mlx_new_image(data.mlx, data.r_width, data.r_height);
    data.addr = mlx_get_data_addr(data.img, &data.bit_per_pixel, &data.line_length, &data.endian);

    // Hooks
    mlx_loop_hook(data.mlx, mrt_frame_render, &data);
    // 2: KeyPress, 1L<<0: KeyPressMask
    mlx_hook(data.win, 2, 1L<<0, mrt_key_press, &data);
    mlx_hook(data.win, 6, 1L<<6, mrt_mouse_motion, &data);

    //mlx_hook(data.win, 17, (0L), close_program, &data);
    mlx_loop(data.mlx);

    return 0;
}
