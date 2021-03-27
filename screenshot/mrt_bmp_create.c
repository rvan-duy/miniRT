/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_bmp_create.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/27 23:19:03 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/27 23:31:55 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_data
#include "../includes/screenshot.h"
#include <stdio.h>

void    mrt_bmp_create(t_data *d)
{
    t_bmp_file_header   fh;
    t_bmp_dib_header    dh;

    printf("%d\n", d->bit_per_pixel);
}
