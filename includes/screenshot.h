/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   screenshot.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/25 10:42:04 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/29 11:06:19 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREENSHOT_H
# define SCREENSHOT_H

#include <stdint.h> // specific ints byte wise
#include "miniRT.h" // t_data

/* Struct containing BMP file header info */
// name: 2 bytes for name of header field (actually 4 bytes cuz C being C)
// size: 4 bytes for size of BMP file header in bytes
// null: 4 bytes of data that is not required
// offset_data: 4 bytes of adress of the byte where the pixel array can be found
typedef struct s_bmp_file_header {
	char		name[2];
	uint32_t	size;
	uint16_t	reserved1;
	uint16_t	reserved2;
	uint32_t	offset_data;
}	t_bmp_file_header;

/* Struct containing info Windows BITMAPINFOHEADER*/
// size: 4 bytes for size of BMP DIB header in bytes
// width: 4 bytes for BMP width in pixels
// height: 4 bytes for BMP height in pixels
// colorplanes: 2 bytes for number of color planes
// bits_per_pixel: 2 bytes for number of bits per pixel
// compression_method 4 byes for method
// image_size: 4 bytes for image size
// the rest we don't really use
typedef struct s_bmp_dib_header {
	uint32_t	size;
	int32_t		width;
	int32_t		height;
	uint16_t	colorplanes;
	uint16_t	bit_per_pixel;
	uint32_t	compression_method;
	uint32_t	image_size;
	int32_t 	x_pixels_per_meter;
	int32_t 	y_pixels_per_meter;
	uint32_t 	colors_used;
	uint32_t 	colors_important;
}	t_bmp_dib_header;

typedef struct s_bmp_pixel_array {
	unsigned char	alpha;
	unsigned char	red;
	unsigned char	green;
	unsigned char	blue;
}	t_bmp_pixel_array;

void	mrt_bmp_create(t_data *d);

#endif