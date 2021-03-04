/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_resolution_parse.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 21:10:11 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/04 11:59:28 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include "../includes/error_msg.h" // error_msg
#include <stdio.h>

void    mrt_resolution_parse(char **split_line, t_vars *v, int i)
{
    printf("1:%s\n2:%s\n", split_line[0], split_line[1]);
}