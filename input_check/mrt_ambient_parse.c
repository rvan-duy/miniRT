/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ambient_parse.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 13:21:33 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/04 14:10:03 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include "../includes/error_msg.h" // error_msg
#include "../includes/libft.h" // atoi
#include "../includes/input_check.h" // arr_size_check
#include <stdio.h>

void    mrt_ambient_parse(char **split_line, t_vars *v, int i)
{
    int size;

    if (v->a_ambient)
        mrt_error_msg(i, "Ambient already exists");
    size = mrt_arr_size_check(split_line);
    if (size > 2)
        mrt_error_msg(i, "Too many values for ambient");
    if (size < 2)
        mrt_error_msg(i, "Not enough values for ambient");
    printf("0:%s\n1:%s\n", split_line[0], split_line[1]);
    // v->a_ratio= atod??
    // v->a_rgb= rgb_get
    v->a_ambient = TRUE;
}