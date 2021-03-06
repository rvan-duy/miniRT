/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_ambient_parse.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 13:21:33 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/27 14:23:36 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check rgb_create ratio_create
#include <stdio.h>

void	mrt_ambient_parse(char **split_line, t_vars *v, int line)
{
	int	size;

	if (v->ambient.status)
		mrt_error_msg(line, "Ambient already exists");
	size = mrt_arr_size_check(split_line);
	if (size > 2)
		mrt_error_msg(line, "Too many values for ambient");
	if (size < 2)
		mrt_error_msg(line, "Not enough values for ambient");
	mrt_ratio_create(split_line[0], &v->ambient.ratio, line);
	v->ambient.rgb = mrt_rgb_create(split_line[1], line);
	v->ambient.status = TRUE;
}
