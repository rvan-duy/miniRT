/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_cylinder_parse.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:15:16 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/30 13:55:20 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars t_cylinder t_list lstnew lstadd_back
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check create_functions

void	mrt_cylinder_parse(char **split_line, t_vars *v, int line)
{
	int			size;
	t_cylinder	*cylinder;
	t_list		*node;

	cylinder = malloc(sizeof(t_cylinder));
	if (!cylinder)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_line);
	if (size > 5)
		mrt_error_msg(line, "Too many values for cylinder");
	if (size < 5)
		mrt_error_msg(line, "Not enough values for cylinder");
	mrt_coords_create(split_line[0], &cylinder->coords, line);
	mrt_vector_create(split_line[1], &cylinder->norm_vector, line);
	mrt_diameter_create(split_line[2], &cylinder->diameter, line);
	mrt_height_create(split_line[3], &cylinder->height, line);
	cylinder->rgb = mrt_rgb_create(split_line[4], line);
	node = ft_lstnew(cylinder);
	if (!node)
		mrt_error_msg(line, "Unable to allocate memory");
	ft_lstadd_back(&v->cylinder, node);
}
