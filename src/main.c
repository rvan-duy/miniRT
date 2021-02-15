#include "minilibx_opengl/mlx.h"
#include "libft/libft.h"
#include <stdio.h>

typedef struct  s_data {
    void        *mlx;
    void        *win;
    void        *img;
    char        *addr;
    int         bits_per_pixel;
    int         line_length;
    int         endian;
}               t_data;

void    my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char    *dst;

    printf("hey2\n");
    dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
    printf("hey3\n");
    *(unsigned int*)dst = color;
    printf("hey4\n");
}

int main(void)
{
    t_data data;

    ft_bzero(&data, (sizeof (t_data)));
    printf("%d\n", data.line_length);
    data.mlx = mlx_init();
    data.win = mlx_new_window(&data.mlx, 300, 300, "window");
    data.img = mlx_new_image(&data.mlx, 300, 300);
    if (data.img == NULL)
        printf("panic image\n");
    data.addr = mlx_get_data_addr(&data.img, &data.bits_per_pixel, &data.line_length, &data.endian);
    printf("bpp:%d, ll:%d, endian:%d\n", data.bits_per_pixel, data.line_length, data.endian);
    if (data.addr == NULL)
        printf("panic\n");
    int x, y;
    printf("hey\n");

    y = 0;
    while (y < 300)
    {
        x = 0;
        while (x < 300)
        {
            my_mlx_pixel_put(&data, x, y, 0x00008b);
            x++;
            printf("i am here.\n");
        }
        y++;
    }
    mlx_put_image_to_window(&data.mlx, &data.win, &data.img, 0, 0);

    while (1) {};
    return 0;
}