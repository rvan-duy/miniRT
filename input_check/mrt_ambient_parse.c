/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ambient_parse.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 13:21:33 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/04 15:34:10 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include "../includes/error_msg.h" // error_msg
#include "../includes/libft.h" // atoi
#include "../includes/input_check.h" // arr_size_check
#include "../includes/colors.h" // rgb_create
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
    v->a_ratio = ft_atod(split_line[0]);
    v->a_rgb = mrt_rgb_create(split_line[1]);
    printf("ratio:%.1f\n1:%X\n", v->a_ratio, v->a_rgb);
    v->a_ambient = TRUE;
}