/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_camera_parse.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 13:05:25 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/08 17:52:57 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check
#include <stdio.h>

void	mrt_camera_parse(char **split_line, t_vars *v, int line)
{
	int	size;

	size = mrt_arr_size_check(split_line);
	if (size > 3)
		mrt_error_msg(line, "Too many values for camera");
	if (size < 3)
		mrt_error_msg(line, "Not enough values for camera");
	//if (!v->cam)
		//v->cam = mrt_camera_lstnew();
	mrt_coords_create(split_line[0], v->cam->coords, line);
	printf("%f %f %f\n", v->cam->coords->x, v->cam->coords->y, v->cam->coords->z);
}
