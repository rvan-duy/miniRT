/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_parse_utils_2.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 17:43:57 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/30 13:55:20 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_coords t_vector
#include "../includes/error_msg.h" // error_msg
#include "../includes/libft.h" // atoi atod
#include "../includes/input_check.h" // arr_size_check

static void	mrt_arr_isdigit_check(char **split_str, int line)
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

void	mrt_comma_check(char *str, int line)
{
	int	i;
	int	commacount;

	i = 0;
	commacount = 0;
	while (str[i])
	{
		if (str[i] == ',')
			commacount++;
		i++;
	}
	if (commacount > 2)
		mrt_error_msg(line, "Too many commas used");
	if (commacount < 2)
		mrt_error_msg(line, "Not enough commas used");
}

void	mrt_coords_create(char *str, t_coords *c, int line)
{
	char	**split_str;
	int		size;

	mrt_comma_check(str, line);
	split_str = ft_split(str, ',');
	if (!split_str)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_str);
	if (size != 3)
		mrt_error_msg(line, "Cannot recognize coordinates");
	mrt_arr_isdigit_check(split_str, line);
	c->x = ft_atod(split_str[0]);
	c->y = ft_atod(split_str[1]);
	c->z = ft_atod(split_str[2]);
}

void	mrt_vector_create(char *str, t_vector *v, int line)
{
	char	**split_str;
	int		size;

	mrt_comma_check(str, line);
	split_str = ft_split(str, ',');
	if (!split_str)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_str);
	if (size != 3)
		mrt_error_msg(line, "Cannot recognize vector orientation");
	mrt_arr_isdigit_check(split_str, line);
	v->x = ft_atod(split_str[0]);
	v->y = ft_atod(split_str[1]);
	v->z = ft_atod(split_str[2]);
	if (v->x > 1 || v->y > 1 || v->z > 1 || v->x < -1 || v->y < -1 || v->z < -1)
		mrt_error_msg(line, "Invalid normalized vector value(s), must be in range [-1,1]");
}

void	mrt_fov_create(char *str, int *fov, int line)
{
	*fov = ft_atoi(str);
	if (*fov < 0 || *fov > 180)
		mrt_error_msg(line, "Invalid field of view value, \
must be in range [0,180]");
}
