/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_light_parse.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 12:42:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/09 16:32:42 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars t_light t_list lstnew lstadd_back
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check create_functions
#include <stdio.h>

void	mrt_light_parse(char **split_line, t_vars *v, int line)
{
	int		size;
	t_light	*light;
	t_list	*node;

	light = malloc(sizeof(t_light)); // protec
	size = mrt_arr_size_check(split_line);
	if (size > 3)
		mrt_error_msg(line, "Too many values for light");
	if (size < 3)
		mrt_error_msg(line, "Not enough values for light");
	mrt_coords_create(split_line[0], &light->coords, line);
	light->ratio = mrt_ratio_create(split_line[1], line);
	light->rgb = mrt_rgb_create(split_line[2], line);
	node = ft_lstnew(light);
	printf("hi\n");
	if (!node)
		mrt_error_msg(line, "Unable to allocate memory");
	ft_lstadd_back(&v->light, node);
	printf("hi\n");
}
