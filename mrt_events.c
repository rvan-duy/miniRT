/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_events.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:20:25 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/02/26 15:31:49 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "miniRT.h" // t_data & functions
#include "mlx_linux/mlx.h" // mlx functions
#include <stdio.h> // printf
#include <stdlib.h> // exit

int mrt_key_press(int keycode, t_data *v)
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

int mrt_frame_render(t_data *v)
{
    draw_cross(v, 0xFFFFFF);
    mlx_put_image_to_window(v->mlx, v->win, v->img, 0, 0);
    return (1);
}

int mrt_program_close(void *ptr)
{
    printf("Closing program..\n");
    exit(0);
    return (1);
}
