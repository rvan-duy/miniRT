/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_parse_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 21:18:05 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/08 16:31:47 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_coords
#include "../includes/libft.h" // atoi atod isdigit split
#include "../includes/error_msg.h" // error_msg
#include <stdio.h>

int	mrt_arr_size_check(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

static void	mrt_rgb_isdigit_check(char **split_str, int size, int line)
{
	int	i;
	int	y;

	i = 0;
	while (split_str[i])
	{
		y = 0;
		while (split_str[i][y])
		{
			if (!ft_isdigit(split_str[i][y]))
				mrt_error_msg(line, "Cannot recognize RGB code");
			y++;
		}
		i++;
	}
}

int	mrt_rgb_create(char *str, int line)
{
	int		red;
	int		green;
	int		blue;
	int		size;
	char	**split_str;

	split_str = ft_split(str, ',');
	if (!split_str)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_str);
	if (size != 3)
		mrt_error_msg(line, "Cannot recognize RGB code");
	mrt_rgb_isdigit_check(split_str, size, line);
	red = ft_atoi(split_str[0]);
	green = ft_atoi(split_str[1]);
	blue = ft_atoi(split_str[2]);
	if (red > 255 || green > 255 || blue > 255)
		mrt_error_msg(line, "Wrong color value(s), must be between 0-255");
	return (red << 16 | green << 8 | blue);
}

static void	mrt_coords_isdigit_check(char **split_str, int size, int line)
{
	int	i;
	int	y;

	i = 0;
	while (split_str[i])
	{
		y = 0;
		while (split_str[i][y])
		{
			if (!ft_isdigit(split_str[i][y]) && split_str[i][y] != '.' && split_str[i][y] != '-')
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
	mrt_coords_isdigit_check(split_str, size, line);
	printf("test\n");
	c->x = ft_atod(split_str[0]);
	c->y = ft_atod(split_str[1]);
	c->z = ft_atod(split_str[2]);
}
