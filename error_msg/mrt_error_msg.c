/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_error_msg.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 15:23:06 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/04 12:15:30 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // printf
#include <stdlib.h> // exit

void	mrt_error_msg(int line_number, char *msg)
{
	if (line_number)
	{
		printf("Error\n(line:%d) %s.\n", line_number, msg);
		exit(1);
	}
	else
	{
		printf("Error\n%s.\n", msg);
		exit(1);
	}
}
