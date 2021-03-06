/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_input_check.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 15:00:46 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/23 13:23:32 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/input_check.h" // argv_check rt_file_read
#include "../includes/miniRT.h" // t_vars
#include <stdio.h>

void	mrt_input_check(int argc, char **argv, t_vars *v)
{
	mrt_argv_check(argc, argv, v);
	mrt_rt_file_read(v, argv[1]);
	mrt_scene_check(v);
	mrt_rt_file_print(v);
}
