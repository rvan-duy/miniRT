/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_resolution_parse.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 21:10:11 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/30 15:45:07 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include "../includes/error_msg.h" // error_msg
#include "../includes/libft.h" // atoi
#include "../includes/input_check.h" // arr_size_check
#include <stdio.h>

void	mrt_resolution_parse(char **split_line, t_vars *v, int line)
{
	int	size;

	if (v->res.status)
		mrt_error_msg(line, "Resolution already exists");
	size = mrt_arr_size_check(split_line);
	if (size > 2)
		mrt_error_msg(line, "Too many values for resolution");
	if (size < 2)
		mrt_error_msg(line, "Not enough values for resolution");
	v->res.width = ft_atoi(split_line[0]); // these need to be seperate functions
	v->res.height = ft_atoi(split_line[1]); // does this have a max???
	v->res.status = TRUE;
}
