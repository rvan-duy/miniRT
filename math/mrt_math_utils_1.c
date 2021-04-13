/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_math_utils_1.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 13:56:29 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/13 14:50:09 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_coords

// This prob needs to be redone, need load of em just make em at will

t_coords    mrt_math_coords_multiply(t_coords c, double i)
{
    t_coords    new_coords;
    
    new_coords.x = c.x * i;
    new_coords.y = c.y * i;
    new_coords.z = c.z * i;
    return (new_coords);
}

t_coords    mrt_math_coords_divide(t_coords c, double i)
{
    t_coords    new_coords;
    
    new_coords.x = c.x / i;
    new_coords.y = c.y / i;
    new_coords.z = c.z / i;
    return (new_coords);
}

t_coords    mrt_math_coords_add(t_coords c1, t_coords c2)
{
    t_coords    new_coords;

    new_coords.x = c1.x + c2.x;
    new_coords.y = c1.y + c2.y;
    new_coords.z = c1.z + c2.z;
    return (new_coords);
}

t_coords    mrt_math_coords_min(t_coords c1, t_coords c2)
{
    t_coords    new_coords;

    new_coords.x = c1.x - c2.x;
    new_coords.y = c1.y - c2.y;
    new_coords.z = c1.z - c2.z;
    return (new_coords);
}

t_coords    mrt_math_coords_min_divide(t_coords c1, t_coords c2, double i)
{
    t_coords    new_coords;

    new_coords.x = c1.x - (c2.x / i);
    new_coords.y = c1.y - (c2.y / i);
    new_coords.z = c1.z - (c2.z / i);
    return (new_coords);
}

t_coords    mrt_math_coords_times(t_coords c1, t_coords c2)
{
    t_coords    new_coords;

    new_coords.x = c1.x * c2.x;
    new_coords.y = c1.y * c2.y;
    new_coords.z = c1.z * c2.z;
    return (new_coords);
}

t_coords    mrt_math_coords_create(double x, double y, double z)
{
    t_coords coords;

    coords.x = x;
    coords.y = y;
    coords.z = z;
    return (coords);
}

/*
void    mrt_math_vector_remove(t_vector *v1, t_vector *v2)
{
    v1->x -= v2->x;
    v1->y -= v2->y;
    v1->z -= v2->z;
    return ;
}

void    mrt_math_vector_multiply(t_vector *v, double i)
{
    v->x *= i;
    v->y *= i;
    v->z *= i;
    return ;
}

void    mrt_math_vector_divide(t_vector *v, double i)
{
    v->x /= i;
    v->y /= i;
    v->z /= i;
    return ;
}*/
