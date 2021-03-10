/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_square_parse.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 14:54:15 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/10 15:11:24 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars t_square t_list lstnew lstadd_back
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check create_functions

void	mrt_square_parse(char **split_line, t_vars *v, int line)
{
	int			size;
	t_square	*square;
	t_list		*node;

	square = malloc(sizeof(t_square));
	if (!square)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_line);
	if (size > 4)
		mrt_error_msg(line, "Too many values for square");
	if (size < 4)
		mrt_error_msg(line, "Not enough values for square");
	mrt_coords_create(split_line[0], &square->coords, line);
	mrt_vector_create(split_line[1], &square->vector, line);
	mrt_size_create(split_line[2], &square->size, line);
	square->rgb = mrt_rgb_create(split_line[3], line);
	node = ft_lstnew(square);
	if (!node)
		mrt_error_msg(line, "Unable to allocate memory");
	ft_lstadd_back(&v->square, node);
}
