/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_parse_utils_1.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 21:18:05 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/16 14:20:48 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_coords
#include "../includes/libft.h" // atoi atod isdigit split
#include "../includes/input_check.h" // comma_check
#include "../includes/error_msg.h" // error_msg

int	mrt_arr_size_check(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

static void	mrt_rgb_isdigit_check(char **split_str, int line)
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

	mrt_comma_check(str, line);
	split_str = ft_split(str, ',');
	if (!split_str)
		mrt_error_msg(line, "Unable to allocate memory");
	size = mrt_arr_size_check(split_str);
	if (size != 3)
		mrt_error_msg(line, "Cannot recognize RGB code");
	mrt_rgb_isdigit_check(split_str, line);
	red = ft_atoi(split_str[0]);
	green = ft_atoi(split_str[1]);
	blue = ft_atoi(split_str[2]);
	if (red > 255 || green > 255 || blue > 255)
		mrt_error_msg(line, "Invalid color value(s), must be in range [0-255]");
	return (red << 16 | green << 8 | blue);
}

void	mrt_ratio_create(char *str,	double *ratio, int line)
{
	*ratio = ft_atod(str);
	if (*ratio < 0 || *ratio > 1)
		mrt_error_msg(line, "Invalid ratio value, must be in range [0.0,1.0]");
}

void	mrt_diameter_create(char *str, double *diameter, int line)
{
	int		i;

	i = 0;
	if (str[i] == '-')
		mrt_error_msg(line, "Diameter cannot be negative");
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '.')
			mrt_error_msg(line, "Cannot recognize diameter");
		i++;
	}
	*diameter = ft_atod(str);
}
