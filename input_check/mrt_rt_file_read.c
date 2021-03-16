/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_rt_file_read.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 17:05:32 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/16 14:40:06 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include "../includes/error_msg.h" // error_msg
#include "../includes/libft.h" // calloc gnl
#include "../includes/input_check.h" // resolution_parse
#include <fcntl.h> // open
#include <stdio.h>

static void mrt_line_parse(char *line, t_vars *v, int i)
{
	char **split_line;

	split_line = ft_split(line, ' ');
	if (!split_line)
		mrt_error_msg(i, "Unable to allocate memory");
	if (!split_line[0])
		(void)NULL;
	else if (!ft_strncmp(split_line[0], "R", 2))
		mrt_resolution_parse(split_line + 1, v, i);
	else if (!ft_strncmp(split_line[0], "A", 2))
		mrt_ambient_parse(split_line + 1, v, i);
	else if (!ft_strncmp(split_line[0], "c", 2))
		mrt_camera_parse(split_line + 1, v, i);
	else if (!ft_strncmp(split_line[0], "l", 2))
		mrt_light_parse(split_line + 1, v, i);
	else if (!ft_strncmp(split_line[0], "sp", 3))
		mrt_sphere_parse(split_line + 1, v, i);
	else if (!ft_strncmp(split_line[0], "pl", 3))
		mrt_plane_parse(split_line + 1, v, i);
	else if (!ft_strncmp(split_line[0], "sq", 3))
		mrt_square_parse(split_line + 1, v, i);
	else if (!ft_strncmp(split_line[0], "cy", 3))
		mrt_cylinder_parse(split_line + 1, v, i);
	else if (!ft_strncmp(split_line[0], "tr", 3))
		mrt_triangle_parse(split_line + 1, v, i);
	//printf("we free stuff now\n");
}

void    mrt_rt_file_read(t_vars *v, char *file_name)
{
	int ret;
	int fd;
	int i;
	char *line;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		mrt_error_msg(0, "unable to open \".rt\" file");
	ret = 1;
	i = 1;
	while (ret == 1)
	{
		ret = get_next_line(fd, &line);
		if (ret == -1)
			mrt_error_msg(0, "something went wrong with get_next_line");
		mrt_line_parse(line, v, i);
		// function to check and read the line in
		// need a new struct for this?
		free(line); // make sure this is not double included
		i++;
	}
}
