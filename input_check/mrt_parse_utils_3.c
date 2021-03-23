/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_parse_utils_3.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 15:02:06 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/23 15:43:32 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/error_msg.h" // error_msg
#include "../includes/miniRT.h" // t_vars libft
#include <stdio.h>

void	mrt_size_create(char *str, double *size, int line)
{
	int	i;

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

void	mrt_lstadd(t_list **head, void *content, int line)
{
	t_list *node;

	if (*head)
	{
		node = ft_lstnew(content);
		if (!node)
			mrt_error_msg(line, "Unable to allocate memory");
		ft_lstadd_back(head, node);
	}
	else
	{
		*head = ft_lstnew(content);
		if (!*head)
			mrt_error_msg(line, "Unable to allocate memory");
	}
}
