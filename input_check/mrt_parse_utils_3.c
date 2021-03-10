/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_parse_utils_3.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 15:02:06 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/10 15:08:13 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h" // atod
#include "../includes/error_msg.h" // error_msg

void	mrt_size_create(char *str, double *size, int line)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '.')
			mrt_error_msg(line, "Cannot recognize diameter");
		i++;
	}
	*size = ft_atod(str);
}
