/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 10:54:56 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/01 14:34:32 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/miniRT.h"
#include "includes/color.h"
#include "includes/math.h"
//#include "mlx_linux/mlx.h"
#include "mlx/mlx.h"
#include "includes/libft.h"
#include "includes/input_check.h"
#include "includes/screenshot.h"
#include "includes/struct_init.h"
#include "includes/ray.h"
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
    ft_bzero(&vars, sizeof(t_vars));
    ft_bzero(&data, sizeof(t_data));
    mrt_vars_init(&vars);

    // Doing extensive input checks
    mrt_input_check(argc, argv, &vars);
    data.vars = vars;

    // Initializing the mlx library, can return NULL if it goes wrong.
    data.mlx = mlx_init();
    if (!data.mlx)
        return (0);

    data.r_width = vars.res.width;
    data.r_height = vars.res.height;

    // --save
    //mrt_bmp_create(&data);

    t_ray ray;
    t_coords coords;
    int t = RAY_LEN_MIN;
    ray.direction.x = 1;
    ray.direction.y = 1;
    ray.direction.z = 0;
    ray.origin.x = 0;
    ray.origin.y = 0;
    ray.origin.z = 0;
    int hit_someting = FALSE;

    // Shooting a single ray at the direction of ray.direction
    // ray is a struct containing info about ray: origin & direction
    // t is used to loop through the ray
    /*while (hit_someting == FALSE || t <= RAY_LEN_MAX)
    {
        // Get ray position based on the origin, direction and t
        coords = mrt_ray_pos_get(&ray, t);
        printf("x:%f y:%f z:%f\n", coords.x, coords.y, coords.z);
        // Check if coords is inside the sphere
        if ()
        t++;
    }
    if (hit_someting == TRUE)
    {
        printf("Ray hit sphere 1\n");
        
    }*/
    
    

    /* The vec3 Class */
    // Declare vec with 3 doubles
    // Make some util functions
    //      Vec - Vec
    //      Vec + Vec
    //      Vec * Vec
    //      Vec / Vec
    //      Vec Len
    //      Vec Len Squared

    /* The ray Class */
    // P(t) = A + tb
    // - P = 3D position along a line in 3D
    // - t = ray parameter a real number??
    // --- move t and P(t) will be a long a different point in the ray
    // --- you can even add negative t to get anywhere
    // - A = Ray origin
    // - b = Ray direction
    // Picture:
    // t=-1     t=0     t=1     t=2
    // <---------A-------B-------->

    /* Sending rays into a scene */
    // 1. calculate the ray from eye to screen
    // 2. determine which objects the hits
    // 3. compute a color for that intersection point
    // camera center is op 0,0,0
    // 

    /*
        ADDING A SPHERE NEXT
        https://raytracing.github.io/books/RayTracingInOneWeekend.html
     */

    /* double check parser what if cylinder comes before camera */


    /*data.win = mlx_new_window(data.mlx, data.r_width, data.r_height, "Hello World");
    data.img = mlx_new_image(data.mlx, data.r_width, data.r_height);
    data.addr = mlx_get_data_addr(data.img, &data.bit_per_pixel, &data.line_length, &data.endian);

    // Hook
    mlx_loop_hook(data.mlx, mrt_frame_render, &data);
    mlx_hook(data.win, KeyPress, KeyPressMask, mrt_key_press, &data);
    mlx_hook(data.win, MotionNotify, PointerMotionMask, mrt_mouse_motion, &data);

    // Vector: is a line segment running from point A (tail) to point B (head)
    // Magnitude

    //mlx_hook(data.win, 17, (0L), close_program, &data);
    mlx_loop(data.mlx);*/

    return 0;
}
