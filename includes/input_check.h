/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 15:13:38 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/03 17:13:49 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_CHECK_H
# define INPUT_CHECK_H

#include "miniRT.h" // t_vars

void    mrt_input_read(int argc, char **argv, t_vars *v);
void    mrt_argv_check(int argc, char **argv, t_vars *v);
void    mrt_rt_file_read(t_vars *v, char *file_name);

#endif