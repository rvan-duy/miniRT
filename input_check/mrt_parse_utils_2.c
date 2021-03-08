/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_parse_utils_2.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 17:43:57 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/08 17:49:35 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_camera
#include "../includes/libft.h" // calloc

t_camera    *mrt_camera_lstnew()
{
    t_camera *cam;

    cam = ft_calloc(1, sizeof(t_camera));
    if (!cam)
        return (NULL);
    return (cam);
}
