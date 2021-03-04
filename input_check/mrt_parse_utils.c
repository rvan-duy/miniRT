/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_parse_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 21:18:05 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/03 21:27:05 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/error_msg.h"

void    mrt_value_amount_check(char **split_line, int n)
{
    int i;

    i = 0;
    while (split_line[i])
        i++;
    if (i > n)
        mrt_error_msg(0, "To many values in line");
    if (i < n)
        mrt_error_msg(0, "Not enough values in line");
}