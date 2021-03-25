/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   screenshot.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/25 10:42:04 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/25 11:09:18 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREENSHOT_H
# define SCREENSHOT_H

/* Struct containing BMP header info */
// name: 2 bytes for name of header field (actually 4 bytes cuz C being C)
// size: 4 bytes for size of BMP file in bytes
// null: 4 bytes of data that is not required
// image_start: 4 bytes of adress of the byte where the pixel array can be found
typedef struct s_bmp_header {
	char			name[2];
	unsigned int	size;
	int				null;
	unsigned int	image_start;
}	t_bmp_header;

#endif