/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_compare.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 18:31:16 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 13:08:39 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"

int mrt_tuple_compare(t_tuple *dst, t_tuple *src)
{
    if (dst->x - src->x < 0.00001 && \
        dst->y - src->y < 0.00001 && \
        dst->z - src->z < 0.00001 && \
        dst->w - src->w < 0.00001)
        return (1);
    return (0);
}
