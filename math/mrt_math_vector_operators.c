/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_math_vector_operators.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 13:56:29 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/01 14:27:57 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vector

// This prob needs to be redone, need load of em just make em at will

t_coords    mrt_math_vector_multiply(t_vector *v, double i)
{
    t_coords pos;

    pos.x = v->x * i;
    pos.y = v->y * i;
    pos.z = v->z * i;
    return (pos);
}

void    mrt_math_vector_add(t_vector *v1, t_vector *v2)
{
    v1->x += v2->x;
    v1->y += v2->y;
    v1->z += v2->z;
    return ;
}

void    mrt_math_vector_min(t_vector *v1, t_vector *v2)
{
    v1->x -= v2->x;
    v1->y -= v2->y;
    v1->z -= v2->z;
    return ;
}

void    mrt_math_vector_times(t_vector *v1, t_vector *v2)
{
    v1->x *= v2->x;
    v1->y *= v2->y;
    v1->z *= v2->z;
    return ;
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
