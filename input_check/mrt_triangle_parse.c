/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_triangle_parse.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 14:35:30 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/23 16:04:42 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars t_triangle
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check create_functions

void	mrt_triangle_parse(char **split_line, t_vars *v, int line)
{
	int			size;
	t_triangle	*triangle;

	triangle = malloc(sizeof(t_triangle));
	if (!triangle)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_line);
	if (size > 4)
		mrt_error_msg(line, "Too many values for triangle");
	if (size < 4)
		mrt_error_msg(line, "Not enough values for triangle");
	mrt_coords_create(split_line[0], &triangle->coords_1, line);
	mrt_coords_create(split_line[1], &triangle->coords_2, line);
	mrt_coords_create(split_line[2], &triangle->coords_3, line);
	triangle->rgb = mrt_rgb_create(split_line[3], line);
	mrt_lstadd(&v->triangle, triangle, line);
}
