/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   miniRT.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:13:32 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/02/26 17:52:30 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

// Main struct to store all data in
typedef struct s_data {
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bit_per_pixel;
	int		line_length;
	int		endian;
	int		height;
	int		width;
}	t_data;

// Modify pixels
void	my_mlx_pixel_put(t_data *v, int x, int y, int color);
void	mrt_draw_cross(t_data *v, int color);

// Events
int		mrt_frame_render(t_data *v);
int		mrt_key_press(int keycode, t_data *v);
int		mrt_mouse_motion(int x, int y, t_data *v);
int		mrt_program_close(void *ptr);

#endif