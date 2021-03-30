/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_bmp_create.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/27 23:19:03 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/29 11:22:45 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_data
#include "../includes/libft.h" // bzero
#include "../includes/error_msg.h" // error_msg
#include "../includes/screenshot.h" // bmp_structs stdint
#include <fcntl.h> // open
#include <stdio.h>
#include <unistd.h>

static void mrt_bmp_file_header_write(t_data *d, t_bmp_file_header *fh, int fd)
{
    int ret;
    
    ret = 0;
    ret += write(fd, fh->name, 2 * sizeof(char));
    printf("fd:%d ret:%d\n", fd, ret);
    ret += write(fd, &fh->size, 3 * sizeof(uint32_t));
    printf("fd:%d ret:%d\n", fd, ret);
}

void    mrt_bmp_create(t_data *d)
{
    t_bmp_file_header   fh;
    t_bmp_dib_header    dh;
    int                 fd;

    ft_bzero(&fh, sizeof(t_bmp_file_header));
    fh.name[0] = 'B';
    fh.name[1] = 'M';
    fh.size = 1094;
    fh.offset_data = 1078;

	fd = open("screenshot.bmp", O_RDWR | O_CREAT, 0666);
    if (fd < 0)
        mrt_error_msg(0, "Error trying to open or create screenshot.bmp");
    printf("fd:%d\n", fd);

    // Write data to header
    mrt_bmp_file_header_write(d, &fh, fd);

    // Write pixeldata
    
    if  (close(fd) < 0)
        mrt_error_msg(0, "Unable to close screenshot.bmp");

    printf("%d\n", d->bit_per_pixel);
}
