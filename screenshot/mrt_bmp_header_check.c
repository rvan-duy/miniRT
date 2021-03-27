/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_bmp_header_check.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/27 16:35:03 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/27 16:48:25 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/screenshot.h" // t_bmp_file_header t_bmp_dib_header
#include <stdio.h> // printf

static int	mrt_bmp_error_print(char *str)
{
	printf("Error\n%s.\n", str);
	return (0);
}

int	mrt_bmp_header_check(t_bmp_file_header *f, t_bmp_dib_header *d)
{
	if (f->name[0] != 'B' || f->name[1] != 'M')
		return (mrt_bmp_error_print("BMP file header name is not 'BM'"));
	if (d->size != 40)
		return (mrt_bmp_error_print("BMP DIB header size is not 40"));
	if (d->compression_method != 0)
		return (mrt_bmp_error_print("BMP DIB header compression \
method is not 0"));
	return (1);
}

/*int main()
{
	t_bmp_file_header f;
	t_bmp_dib_header d;

	f.name[0] = 'B';
	f.name[1] = 'M';
	d.size = 40;
	d.compression_method = 1;
	mrt_bmp_header_check(&f, &d);
	
	return 1;
}*/