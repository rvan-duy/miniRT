/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_scale.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 14:11:12 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 14:22:33 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"

void    mrt_tuple_scale(t_tuple *src, double scale)
{
    src->x *= scale;
    src->y *= scale;
    src->z *= scale;
    src->w *= scale;
    return ;
}
