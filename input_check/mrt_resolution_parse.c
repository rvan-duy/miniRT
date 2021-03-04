/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_resolution_parse.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 21:10:11 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/04 13:21:05 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include "../includes/error_msg.h" // error_msg
#include "../includes/libft.h" // atoi
#include "../includes/input_check.h" // arr_size_check

void    mrt_resolution_parse(char **split_line, t_vars *v, int i)
{
    int size;

    if (v->r_resolution)
        mrt_error_msg(i, "Resolution already exists");
    size = mrt_arr_size_check(split_line);
    if (size > 2)
        mrt_error_msg(i, "Too many values for resolution");
    if (size < 2)
        mrt_error_msg(i, "Not enough values for resolution");
    v->r_width = ft_atoi(split_line[0]);
    v->r_height = ft_atoi(split_line[1]);
    v->r_resolution = TRUE;
}
