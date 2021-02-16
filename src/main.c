#include "mlx/mlx.h"
#include "libft/libft.h"
#include <stdio.h>

typedef struct  s_data {
    void    *img;
    char    *addr;
    int     bit_per_pixel;
    int     line_length;
    int     endian;
}   t_data;

void    my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char *dst;

    dst = data->addr + (y * data->line_length + x * (data->bit_per_pixel / 8));
    *(unsigned int*)dst = color;
}

int main(void)
{
    void *mlx;
    void *mlx_win;
    t_data  img;

    mlx = mlx_init();
    if (!mlx)
        printf("error mlx\n");
    mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
    if (!mlx_win)
        printf("error mlx_win\n");
    img.img = mlx_new_image(mlx, 1920, 1080);
    if (!img.img)
        printf("error img.img\n");
    img.addr = mlx_get_data_addr(img.img, &img.bit_per_pixel, &img.line_length, &img.endian);
    if (!img.addr)
        printf("error img.addr\n");
    printf("%d %d %d\n", img.bit_per_pixel, img.line_length, img.endian);
    my_mlx_pixel_put(&img, 5, 5, 0x00F0000);
    mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
    mlx_loop(mlx);
    return (0);
}
