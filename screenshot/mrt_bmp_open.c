/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_bmp_open.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/25 10:41:27 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/29 11:22:07 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/screenshot.h"
#include "../includes/libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
 
void    mrt_bmp_open()
{
	int             	file;
	t_bmp_file_header	file_header;
	t_bmp_dib_header	dib_header;

	ft_bzero(&file_header, sizeof(t_bmp_file_header));
	ft_bzero(&dib_header, sizeof(t_bmp_dib_header));	
	file = open("screenshot.bmp", O_RDWR | O_CREAT, 0666);
	//read(file, &file_header, sizeof(t_bmp_file_header));
	/*read(file, &file_header.name, 2 * sizeof(char));
	read(file, &file_header.size, 3 * sizeof(int32_t));
	read(file, &dib_header, sizeof(t_bmp_dib_header));
	printf("File header name:%c%c\n", file_header.name[0], file_header.name[1]);
	printf("File header size:%u\n", file_header.size);
	printf("File header reserved1:%d\n", file_header.reserved1);
	printf("File header reserved2:%d\n", file_header.reserved2);
	printf("File header offset data:%u\n", file_header.offset_data);
	printf("DIB Header size:%u\n", dib_header.size);
	printf("DIB Header width:%d\n", dib_header.width);
	printf("DIB Header height:%d\n", dib_header.height);
	printf("DIB Header colorplanes:%u\n", dib_header.colorplanes);
	printf("DIB Header bit per pixel:%u\n", dib_header.bit_per_pixel);
	printf("DIB Header compression method:%u\n", dib_header.compression_method);
	printf("DIB Header image size:%u\n", dib_header.image_size);
	close(file);*/
}

int main()
{
	mrt_bmp_open();
	return 0;
}