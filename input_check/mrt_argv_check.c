/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_argv_check.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 15:03:30 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/03 15:31:56 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// TODO
// Input: argc argv
// - argc moet max 2 zijn
// - argc [1] moet eindigen op .rt
// - argc [2] mag alleen --save zijn

#include "../includes/libft.h"
#include "../includes/error_msg.h" // error_msg

void mrt_argv_check(int argc, char **argv)
{
    if (argc < 2)
        mrt_error_msg(0, "not enough arguments");
    if (argc > 3)
        mrt_error_msg(0, "too many arguments");
    
};
