/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_events.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:20:25 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/19 21:45:46 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/miniRT.h" // t_data & functions
#include "includes/math.h" // shade_add
#include "mlx_linux/mlx.h" // mlx functions
#include "includes/color.h" // shade
#include <stdio.h> // printf
#include <stdlib.h> // exit

int mrt_key_press(int keycode)
{
    if (keycode == 65307)
    {
        printf("Key pressed: ESC (%d)\n", keycode);
        mrt_program_close(NULL);
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

void    mrt_ambient_draw(t_data *v)
{
    int x;
    int y;
    t_vars vars;

    vars = v->vars;
    x = 0;
    while (x < vars.res.width)
    {
        y = 0;
        while (y < vars.res.height)
        {
            my_mlx_pixel_put(v, x, y, vars.ambient.rgb);
            y++;
        }
        x++;
    }
}

int mrt_frame_render(t_data *v)
{
    mrt_ambient_draw(v);
    //mrt_draw_shade(v, 0xFFFFFF);
    mlx_put_image_to_window(v->mlx, v->win, v->img, 0, 0);
    return (1);
}

int mrt_program_close(void *ptr)
{
    printf("Closing program..\n");
    exit(0);
    return (1);
}
