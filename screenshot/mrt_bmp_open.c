/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_bmp_open.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/25 10:41:27 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/25 22:18:19 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/screenshot.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
 
void    mrt_bmp_open()
{
	int             file;
	t_bmp_header    header;
	char name[2];
	unsigned int size;

	file = open("all_gray.bmp", O_RDWR | O_CREAT, 0666);
	//read(file, &header, sizeof(header));
	read(file, &name, 2);
	read(file, &size, 4);
	//printf("%c%c\n", header.name[0], header.name[1]);
	//printf("%u\n", header.size);
	printf("%c%c\n", name[0], name[1]);
	printf("%u\n", size);
	//read(file,)
	close(file);
}

int main()
{
	mrt_bmp_open();
	return 0;
}