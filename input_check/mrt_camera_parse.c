/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_camera_parse.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 13:05:25 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/09 00:26:06 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars t_camera lstnew lstadd_back
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check create_functions
#include <stdio.h>

void	mrt_camera_parse(char **split_line, t_vars *v, int line)
{
	int			size;
	t_camera	cam;
	t_list		node;

	size = mrt_arr_size_check(split_line);
	if (size > 3)
		mrt_error_msg(line, "Too many values for camera");
	if (size < 3)
		mrt_error_msg(line, "Not enough values for camera");
	mrt_coords_create(split_line[0], &cam.coords, line);
	mrt_vector_create(split_line[1], &cam.vector, line);
	cam.fov = mrt_fov_create(split_line[2], line);
	printf("hi\n");
	node.content = &cam;
	//ft_lstadd_back(&v->cam, node);
	//printf("%f %f %f\n", v->cam->coords->x, v->cam->coords->y, v->cam->coords->z);
}
