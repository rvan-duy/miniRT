/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   miniRT.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:13:32 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/09 15:58:38 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# define TRUE 1
# define FALSE 0

# include "libft.h" // t_list

// Main struct to store all data in
typedef struct s_data {
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bit_per_pixel;
	int		line_length;
	int		endian;
	int		r_height;
	int		r_width;
}	t_data;

// Resolution object
typedef struct s_res {
	int		status;
	int		height;
	int		width;
}	t_res;

// Ambient object
typedef struct s_ambient {
	int		status;
	float	ratio;
	int		rgb;
}	t_ambient;

// Coordinates object
typedef struct s_coords {
	double	x;
	double	y;
	double	z;
}	t_coords;

// 3d normalized orientation vector object
typedef struct s_vector {
	float	x;
	float	y;
	float	z;
}	t_vector;

// Light object
typedef struct s_light {
	t_coords	coords;
	float		ratio;
	int			rgb;
}	t_light;

// Camera object
typedef struct s_camera {
	t_coords	coords;
	t_vector	vector;
	int			fov;
}	t_camera;

// Sphere object
typedef struct	s_sphere {
	t_coords	coords;
	double		diameter;
	int			rgb;
}	t_sphere;

typedef struct s_vars {
	int			save;
	t_res		res;
	t_ambient	ambient;
	t_list		*cam;
	t_list		*light;
}	t_vars;

// Modify pixels
void	my_mlx_pixel_put(t_data *v, int x, int y, int color);
void	mrt_draw_cross(t_data *v, int color);

// Events
int		mrt_frame_render(t_data *v);
int		mrt_key_press(int keycode, t_data *v);
int		mrt_mouse_motion(int x, int y, t_data *v);
int		mrt_program_close(void *ptr);

#endif