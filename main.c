/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 10:54:56 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/02/24 10:54:58 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_linux/mlx.h"
#include "libft/libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct  s_data {
    void    *img;
    char    *addr;
    int     bit_per_pixel;
    int     line_length;
    int     endian;
    int     height;
    int     width;
}   t_data;

void    my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char *dst;

    dst = data->addr + (y * data->line_length + x * (data->bit_per_pixel / 8));
    *(unsigned int*)dst = color;
}

void    draw_image(t_data *data, int color)
{
    int x;
    int y;

    y = 0;
    while (y < data->height)
    {
        x = 0;
        while (x < data->width)
        {
            if (x < data->width / 2)
                my_mlx_pixel_put(data, x, y, color + y * x / (x + 1));
            else
                my_mlx_pixel_put(data, x, y, color);
            x++;
        }
        y++;
    }
}

int close_program(void *ptr)
{
    printf("Hello darkness my old friend\n");
    exit(0);
    return (1);
}

int key_press(int key)
{
    printf("key pressed: %d\n", key);
    if (key == 65307)
        close_program(NULL);
    return (1);
}

int main(void)
{
    void *mlx;
    void *mlx_win;
    t_data  img;

    mlx = mlx_init();
    ft_bzero(mlx, sizeof(t_data));
    img.width = 400;
    img.height = 400;
    mlx_win = mlx_new_window(mlx, img.width, img.height, "Hello World");
    img.img = mlx_new_image(mlx, img.width, img.height);
    img.addr = mlx_get_data_addr(img.img, &img.bit_per_pixel, &img.line_length, &img.endian);
    draw_image(&img, 1000000);
    mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
    mlx_hook(mlx_win, 02, (1L), key_press, NULL);
    mlx_hook(mlx_win, 17, (0L), close_program, &img);
    mlx_loop(mlx);

    return 0;
}
