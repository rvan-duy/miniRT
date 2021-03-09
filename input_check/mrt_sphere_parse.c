/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_sphere_parse.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 14:40:15 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/09 16:14:18 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars t_sphere t_list lstnew lstadd_back
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check create_functions
#include "../includes/libft.h" // atod

void    mrt_sphere_parse(char **split_line, t_vars *v, int line)
{
	int         size;
	t_sphere    *sphere;
	t_list      *node;

  	sphere = malloc(sizeof(t_sphere)); // protec
  	size = mrt_arr_size_check(split_line);
	if (size > 3)
		mrt_error_msg(line, "Too many values for sphere");
  	if (size < 3)
		mrt_error_msg(line, "Not enough values for sphere");
	mrt_coords_create(split_line[0], &sphere->coords, line);
	sphere->diameter = mrt_diameter_create(split_line[1], line);
}
