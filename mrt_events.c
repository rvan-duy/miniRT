/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_events.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:20:25 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/27 11:12:37 by rvan-duy      ########   odam.nl         */
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

int mrt_key_press(int keycode, t_data *data)
{
    if (keycode == 65307 || keycode == 53)
    {
        printf("Key pressed: ESC (%d)\n", keycode);
        mrt_program_close(data);
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

// Voor 3d vector punt op camera moet ik verschil uitrekenen tussen het punt en camera?
// De vector is het aparte punt vanaf de camera center
void    mrt_ray_shoot(t_data *data)
{
    int         x;
    int         y;
    t_ray       ray;
    t_ray_vars  ray_vars;
    t_camera    *camera;

    camera = data->vars.cam->content;
    ray_vars.camera = data->vars.cam->content;
    ray_vars.focal_len_coords = ray_vars.camera->norm_vector;
    mrt_ray_vars_init(&ray_vars, &data->vars);
    ray.origin = camera->coords;
    //mrt_print_coords(ray_vars.lower_left_corner, "lower_left_corner");
    y = data->vars.res.height - 1;
    int color = 0xBC002D;
    while (y >= 0)
    {
        //y = 540;
        //x = 960;
        x = 0;
        while (x < data->vars.res.width)
        {
            ray_vars.u = (double)x / (data->vars.res.width - 1);
            ray_vars.v = (double)y / (data->vars.res.height - 1);
            ray.direction = mrt_ray_direction_calc(&ray, &ray_vars);
            //mrt_print_coords(ray.direction, "ray");
            //printf("x:%d y:%d\n", x, y);
            //printf("x_max:%d\n", data->vars.res.width);
            //mrt_print_coords(ray.direction, "direction");
            //mrt_print_coords(ray.origin, "origin");
            if (mrt_ray_collision_check(&ray, &data->vars) >= 0)
            {
                mrt_color_shade_add(0.0001, &color);
                if (color == 0)
                    color = 0xFFFFFF;
                //p("%X\n", color);
                //exit(0);
                my_mlx_pixel_put(data, x, y, color);
            }
            else
                my_mlx_pixel_put(data, x, y, 0xFFFFFF);
            x++;
        }
        y--;
    }
}

int mrt_frame_render(t_data *data)
{
    mrt_ray_shoot(data);
    //mrt_draw_shade(v, 0xFFFFFF);
    mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
    return (1);
}

int mrt_program_close(t_data *data)
{
    mlx_destroy_window(data->mlx, data->win);
    printf("Closing program..\n");
    exit(0);
    return (1);
}
