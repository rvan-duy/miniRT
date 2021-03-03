/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_argv_check.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 15:03:30 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/03 16:46:20 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h" // strrchr strncmp strlen
#include "../includes/error_msg.h" // error_msg
#include "../includes/miniRT.h" // t_vars

void	mrt_argv_check(int argc, char **argv, t_vars *v)
{
	char	*dot;

	if (argc < 2)
		mrt_error_msg(0, "not enough arguments");
	if (argc > 3)
		mrt_error_msg(0, "too many arguments");
	dot = ft_strrchr(argv[1], '.');
	if (!dot || ft_strncmp(dot, ".rt", 4))
		mrt_error_msg(0, "first argument is not of type \".rt\"");
	if (argc == 3 && ft_strncmp(argv[2], "--save", 7))
		mrt_error_msg(0, "second argument can only be \"--save\"");
	if (argc == 3 && !ft_strncmp(argv[2], "--save", 7))
		v->save = TRUE;
}
