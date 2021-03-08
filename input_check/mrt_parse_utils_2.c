/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_parse_utils_2.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 17:43:57 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/08 22:22:15 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vector
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check
#include <stdio.h>

static void	mrt_arr_isdigit_check(char **split_str, int size, int line)
{
	int	i;
	int	y;

	i = 0;
	while (split_str[i])
	{
		y = 0;
		while (split_str[i][y])
		{
			if (!ft_isdigit(split_str[i][y]) && \
			 split_str[i][y] != '.' && split_str[i][y] != '-')
				mrt_error_msg(line, "Cannot recognize coordinates");
			y++;
		}
		i++;
	}
}

void	mrt_coords_create(char *str, t_coords *c, int line)
{
	char	**split_str;
	int		size;

	split_str = ft_split(str, ',');
	if (!split_str)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_str);
	if (size != 3)
		mrt_error_msg(line, "Cannot recognize coordinates");
	mrt_arr_isdigit_check(split_str, size, line);
	c->x = ft_atod(split_str[0]);
	c->y = ft_atod(split_str[1]);
	c->z = ft_atod(split_str[2]);
}

void	mrt_vector_create(char *str, t_vector *v, int line)
{
	char	**split_str;
	int		size;

	split_str = ft_split(str, ',');
	if (!split_str)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_str);
	if (size != 3)
		mrt_error_msg(line, "Cannot recognize vector orientation");
	mrt_arr_isdigit_check(split_str, size, line);
	v->x = ft_atod(split_str[0]);
	v->y = ft_atod(split_str[1]);
	v->z = ft_atod(split_str[2]);
	if (v->x > 1 || v->y > 1 || v->z > 1 || v->x < -1 || v->y < -1 || v->z < -1)
		mrt_error_msg(line, "Invalid vector value(s), must be in range [-1,1]");
}
