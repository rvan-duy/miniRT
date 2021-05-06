/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_tuple_compare.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 18:31:16 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/06 18:49:07 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"

int mrt_tuple_compare(t_tuple *t1, t_tuple *t2)
{
    if (t1->x - t2->x < 0.0001 && \
        t1->y - t2->y < 0.0001 && \
        t1->z - t2->z < 0.0001 && \
        t1->w - t2->w < 0.0001)
        return (1);
    return (0);
}
