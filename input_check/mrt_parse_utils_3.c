/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_parse_utils_3.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 15:02:06 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/16 14:22:32 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h" // atod
#include "../includes/error_msg.h" // error_msg

void	mrt_size_create(char *str, double *size, int line)
{
	int i;

	i = 0;
	if (str[i] == '-')
		mrt_error_msg(line, "Size cannot be negative");
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '.')
			mrt_error_msg(line, "Cannot recognize size");
		i++;
	}
	*size = ft_atod(str);
}

void	mrt_height_create(char *str, double *height, int line)
{
	int		i;

	i = 0;
	if (str[i] == '-')
		mrt_error_msg(line, "Height cannot be negative");
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '.')
			mrt_error_msg(line, "Cannot recognize Height");
		i++;
	}
	*height = ft_atod(str);
}
