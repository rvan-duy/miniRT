/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_events.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:20:25 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/06 15:07:28 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/miniRT.h" // t_data & functions
#include "includes/math.h" // shade_add
//#include "mlx_linux/mlx.h" // mlx functions
#include "mlx/mlx.h" // mlx functions
#include "includes/color.h" // shade
#include "includes/print.h"
#include "includes/ray.h"
#include <stdio.h> // printf
#include <stdlib.h> // exit

int mrt_key_press(int keycode)
{
    if (keycode == 65307 || keycode == 53)
    {
        printf("Key pressed: ESC (%d)\n", keycode);
        mrt_program_close();
    }
    printf("Key pressed: %d\n", keycode);
    return (1);
}

int mrt_mouse_motion(int x, int y, t_data *v)
{
    printf("x: %i y: %i\n", x, y);
    my_mlx_pixel_put(v, x, y, 0xFFFFFF);
    return (1);
}

void    mrt_draw_shade(t_data *v, int color)
{
    int y = 0;
    int x = 0;
    
    while (x < v->r_width)
    {
        y = 0;
        while (y < v->r_height)
        {
            my_mlx_pixel_put(v, x, y, color);
            y++;
        }
        mrt_color_shade_add(0.0001, &color);
        x++;
    }
}

void    mrt_ray_shoot(t_vars *var)
{
    int x;
    int y;
    double u;
    double v;
    t_ray ray;
    t_camera *camera_1;
    t_coords lower_left_corner;

    camera_1 = var->cam->content;
    ray.origin = mrt_math_coords_create(0, 0, 0);
    lower_left_corner = mrt_ray_left_corner_calc(var, &ray);

    /*
    y = 0;
    while (y < (height - 1))
    {
        x = 0;
        while (x < width)
        {
            u = (double)x / (width - 1);
            v = (double)y / (height - 1);
            ray.direction = 
            my_mlx_pixel_put(var, x, y, var->ambient.rgb);
            y++;
        }
        x++;
    }*/
}

int mrt_frame_render(t_data *v)
{
    mrt_ray_shoot(&v->vars);
    //mrt_draw_shade(v, 0xFFFFFF);
    mlx_put_image_to_window(v->mlx, v->win, v->img, 0, 0);
    return (1);
}

int mrt_program_close()
{
    printf("Closing program..\n");
    exit(0);
    return (1);
}
