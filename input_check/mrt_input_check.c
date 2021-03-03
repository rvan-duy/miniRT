/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_input_check.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 15:00:46 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/03 16:50:00 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/input_check.h"
#include "../includes/miniRT.h" // t_vars

void mrt_input_check(int argc, char **argv, t_vars *v)
{
    mrt_argv_check(argc, argv, v);
}
