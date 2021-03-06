/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/02 14:26:58 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/04 14:38:15 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	gnl_make_line(char *buf, char **line, int fd, int ret)
{
	int	len;
	int	foundnewline;

	foundnewline = 0;
	if (!buf[0])
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
			free(line[0]);
		if (ret == 0 || ret == -1)
			return (ret);
		buf[ret] = '\0';
	}
	len = gnl_len(buf);
	if (buf[len] == '\n')
		foundnewline = 1;
	line[0] = gnl_strjoin(buf, line, len);
	if (line[0] == NULL)
		return (-1);
	gnl_parsebuffer(buf, len);
	if (foundnewline == 1)
		return (1);
	return (gnl_make_line(buf, line, fd, ret));
}

int	get_next_line(int fd, char **line)
{
	static char		buf[BUFFER_SIZE + 1];
	int				ret;

	if (!line || fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (-1);
	line[0] = malloc(sizeof(char));
	if (!line[0])
		return (-1);
	line[0][0] = '\0';
	ret = gnl_make_line(buf, line, fd, 0);
	return (ret);
}
