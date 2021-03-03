/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_rt_file_read.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 17:05:32 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/03 17:21:32 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include "../includes/error_msg.h" // error_msg
#include "../includes/libft.h" // calloc gnl
#include <fcntl.h> // open

void    mrt_rt_file_read(t_vars *v, char *file_name)
{
    int ret;
    int fd;
    char **line;

    fd = open(file_name, O_RDONLY);
    if (fd < 0)
        mrt_error_msg(0, "unable to open \".rt\" file");
    ret = 1;
    line = ft_calloc(sizeof(char), 1);
    while (ret == 1)
    {
        ret = get_next_line(fd, line);
        if (ret == -1)
            mrt_error_msg(0, "something went wrong with get_next_line");
        // function to check and read the line in
        // need a new struct for this?
        free(line); // make sure this is not double included
    }
}