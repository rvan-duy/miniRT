/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_plane_parse.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 14:41:46 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/10 14:47:58 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars t_plane t_list lstnew lstadd_back
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check create_functions

void	mrt_plane_parse(char **split_line, t_vars *v, int line)
{
	int		size;
	t_plane *plane;
	t_list  *node;

	plane = malloc(sizeof(t_plane));
	if (!plane)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_line);
	if (size > 3)
		mrt_error_msg(line, "Too many values for plane");
	if (size < 3)
		mrt_error_msg(line, "Not enough values for plane");
    mrt_coords_create(split_line[0], &plane->coords, line);
    mrt_vector_create(split_line[1], &plane->vector, line);
    plane->rgb = mrt_rgb_create(split_line[2], line);
	node = ft_lstnew(plane);
	if (!node)
		mrt_error_msg(line, "Unable to allocate memory");
	ft_lstadd_back(&v->plane, node);
}
