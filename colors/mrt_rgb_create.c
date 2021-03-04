/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_rgb_create.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 15:17:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/04 15:36:22 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars
#include "../includes/libft.h" // atoi
#include <stdio.h>

// input 255,255,255
// output 0xFFFFFF

static int  numbers_jump(char *str, int i)
{
    while (str[i] >= '0' && str[i] <= '9')
        i++;
    return (i);
}

int mrt_rgb_create(char *str)
{
    int red;
    int green;
    int blue;
    int i;

    i = 0;
    red = ft_atoi(str);    
    i = numbers_jump(str, i);
    green = ft_atoi(str + i);
    i = numbers_jump(str, i);
    blue = ft_atoi(str + i);
    printf("red:%X - green:%X - blue:%X\n", red, green, blue);
    return (red << 16 | green << 8 | blue);
}
