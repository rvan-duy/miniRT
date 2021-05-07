/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_compare.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 18:31:16 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 18:30:03 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"

int mrt_tuple_compare(t_tuple *dst, t_tuple *src)
{
    if (mrt_double_compare(dst->x, src->x) && \
        mrt_double_compare(dst->y, src->y) && \
        mrt_double_compare(dst->z, src->z) && \
        mrt_double_compare(dst->w, src->w))
        return (1);
    return (0);
}
