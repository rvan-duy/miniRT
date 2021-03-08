/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_rgb_create.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 15:17:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/08 12:19:31 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h" // atoi isdigit
#include "../includes/error_msg.h" // error_msg
#include "../includes/input_check.h" // arr_size_check

static void	mrt_rgb_isdigit_check(char **split_line, int size, int line)
{
	int	i;
	int	y;

	i = 0;
	while (split_line[i])
	{
		y = 0;
		while (split_line[i][y])
		{
			if (!ft_isdigit(split_line[i][y]))
				mrt_error_msg(line, "Cannot recognize RGB code");
			y++;
		}
		i++;
	}
}

int	mrt_rgb_create(char *str, int i)
{
	int		red;
	int		green;
	int		blue;
	int		size;
	char	**split_line;

	split_line = ft_split(str, ',');
	size = mrt_arr_size_check(split_line);
	if (size != 3)
		mrt_error_msg(i, "Cannot recognize RGB code");
	mrt_rgb_isdigit_check(split_line, size, i);
	red = ft_atoi(split_line[0]);
	green = ft_atoi(split_line[1]);
	blue = ft_atoi(split_line[2]);
	if (red > 255 || green > 255 || blue > 255)
		mrt_error_msg(i, "Wrong color value(s), must be between 0-255");
	return (red << 16 | green << 8 | blue);
}
