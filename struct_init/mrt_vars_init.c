/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_vars_init.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 16:39:03 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/08 16:49:01 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars

void    mrt_vars_init(t_vars *v)
{
    v->save = FALSE;
    v->res->status = FALSE;
    v->res->height = 0;
    v->res->width = 0;
    v->ambient->status = FALSE;
    v->ambient->ratio = 0;
    v->ambient->rgb = -1;
}
