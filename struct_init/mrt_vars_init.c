/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_vars_init.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 16:39:03 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/08 17:54:42 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include <stddef.h> // NULL
#include <stdio.h>

void    mrt_vars_init(t_vars *v)
{
    printf("hi\n");
    v->save = FALSE;
    printf("hi\n");
    v->res->status = FALSE;
    printf("hi\n");
    v->res->height = 0;
    v->res->width = 0;
    printf("hi\n");
    v->ambient->status = FALSE;
    v->ambient->ratio = 0;
    v->ambient->rgb = -1;
    printf("hi\n");
    v->cam = NULL;
}
