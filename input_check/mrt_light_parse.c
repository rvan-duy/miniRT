/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_light_parse.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 12:42:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/23 15:56:46 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars t_light
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check create_functions

void	mrt_light_parse(char **split_line, t_vars *v, int line)
{
	int		size;
	t_light	*light;

	light = malloc(sizeof(t_light));
	if (!light)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_line);
	if (size > 3)
		mrt_error_msg(line, "Too many values for light");
	if (size < 3)
		mrt_error_msg(line, "Not enough values for light");
	mrt_coords_create(split_line[0], &light->coords, line);
	mrt_ratio_create(split_line[1], &light->ratio, line);
	light->rgb = mrt_rgb_create(split_line[2], line);
	mrt_lstadd(&v->light, light, line);
}
