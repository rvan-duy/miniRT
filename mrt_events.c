/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_events.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:20:25 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/09 17:37:50 by rvan-duy      ########   odam.nl         */
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
    int         i;
    int         j;
    t_ray       ray;
    t_camera    *camera_1;
    t_ray_vars  ray_vars;

    mrt_ray_vars_init(&ray_vars, var);
    //camera_1 = var->cam->content;
    //ray.origin = camera_1->coords;
    mrt_print_coords(ray_vars.lower_left_corner, "lower_left_corner");
    j = var->res.height - 1;
    while (j >= 0)
    {
        j = 540;
        i = 960;
        //i = 0;
        while (i < var->res.width)
        {
            ray_vars.u = (double)i / (var->res.width - 1);
            ray_vars.v = (double)j / (var->res.height - 1);
            mrt_ray_direction_calc(&ray, &ray_vars, var);
            mrt_print_coords(ray.direction, "ray");
            break ;
            // get the colour of the ray
            // put colour to pixel!!!!   //my_mlx_pixel_put(var, x, y, var->ambient.rgb);
            i++;
        }
        break ;
        j++;
    }
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
