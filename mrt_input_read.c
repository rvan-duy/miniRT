/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_input_read.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 12:43:32 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/03 13:38:19 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h" // gnl
#include "miniRT.h" // struct
#include <stdio.h> // printf
#include <fcntl.h> // open

// takes an pointer, returns the next non  \n or \t
int mrt_spaces_jump(char *str)
{
    int i;

    i = 0;
    while (str[i] == '\n' || str[i] == '\t')
        i++;
    return (i);
}

// R (x:num) (y:num)
int mrt_input_resolution_check(char *line, t_data *v)
{
    char **split_string;

    // check if R is already done
    split_string = ft_split(line, ' ');
    if (split_string[3])
        return (-1);
    v->r_width = ft_atoi(split_string[1]);
    v->r_height = ft_atoi(split_string[2]);
    printf("height:%d\nwidth:%d\n", v->r_height, v->r_width);
    return (1);
}

int mrt_input_read(char *line, t_data *v)
{
    // skip spaces and tabsss
    // als ie leeg is
    if (line[0] == 'R')
    {
        printf("Checking resolution\n");
        return (mrt_input_resolution_check(line, v));
    }
    if (line[0] == 'A')
        printf("Found Ambient..\n");
    if (line[0] == 'c' && line[1] == ' ')
        printf("Found Camera..\n");
    if (line[0] == 'l')
        printf("Found Light..\n");
    if (line[0] == 's' && line[1] == 'p')
        printf("Found Sphere..\n");
    if (line[0] == 'p' && line[1] == 'l')
        printf("Found Plane..\n");
    if (line[0] == 's' && line[1]  == 'q')
        printf("Found Square..\n");
    if (line[0] == 'c' && line[1] == 'y')
        printf("Found Cylinder..\n");
    if (line[0] == 't' && line[1] == 'r')
        printf("Found Triangle..\n");
    return 1;
}

int main (int argc, char **argv) {
    int i;
    int ret;
    int fd;
    char **line;
    t_data v;

    i = 0;
    ret = 1;
    line = ft_calloc(sizeof(char), 1);
    if (argv[1])
    {
        fd = open(argv[1], O_RDONLY);
        if (!fd)
            return (-1);
        while (ret > 0)
        {
            ret = get_next_line(fd, line);
            //printf("line:%s\n", *line);
            mrt_input_read(*line, &v);
            // read each line and put it in struct. but check for errors..
        };
    };
    return (1);
};