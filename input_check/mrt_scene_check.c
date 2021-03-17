/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_scene_check.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 22:11:50 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/17 22:40:48 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include "../includes/error_msg.h" // error_msg

void    mrt_scene_check(t_vars *v)
{
	// Could be improved.. what if two things at the same time are missing?
	// Do I need to check camera aswell..?
	if (!v->res.status)
		mrt_error_msg(0, "Missing resolution");
	if (!v->ambient.status)
		mrt_error_msg(0, "Missing ambient");
}
