/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_camera_parse.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 13:05:25 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/23 15:49:10 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars t_camera
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check create_functions

void	mrt_camera_parse(char **split_line, t_vars *v, int line)
{
	int			size;
	t_camera	*cam;

	cam = malloc(sizeof(t_camera));
	if (!cam)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_line);
	if (size > 3)
		mrt_error_msg(line, "Too many values for camera");
	if (size < 3)
		mrt_error_msg(line, "Not enough values for camera");
	mrt_coords_create(split_line[0], &cam->coords, line);
	mrt_norm_vector_create(split_line[1], &cam->norm_vector, line);
	mrt_fov_create(split_line[2], &cam->fov, line);
	mrt_lstadd(&v->cam, cam, line);
}
