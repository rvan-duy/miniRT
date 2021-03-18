/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   miniRT.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:13:32 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/18 00:45:01 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# define TRUE 1
# define FALSE 0
# define p printf

// X11 Events
# define KeyPress 2
# define MotionNotify 6

// X11 Masks
# define KeyPressMask 1L<<0
# define PointerMotionMask 1L<<6

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
	double	ratio;
	int		rgb;
}	t_ambient;

// Coordinates object
typedef struct s_coords {
	double	x;
	double	y;
	double	z;
}	t_coords;

// 3D vector
typedef struct s_vector {
	t_coords	tail;
	t_coords	head;
}	t_vector;

// 3D normalized vector
typedef struct s_norm_vector {
	double	x;
	double	y;
	double	z;
}	t_norm_vector;

// Camera object
typedef struct s_camera {
	t_coords		coords;
	t_norm_vector	norm_vector;
	int				fov;
}	t_camera;

// Light object
typedef struct s_light {
	t_coords	coords;
	double		ratio;
	int			rgb;
}	t_light;

// Sphere object
typedef struct	s_sphere {
	t_coords	coords;
	double		diameter;
	int			rgb;
}	t_sphere;

// Plane object
typedef struct	s_plane {
	t_coords		coords;
	t_norm_vector	norm_vector;
	int				rgb;
}	t_plane;

// Square object
typedef struct	s_square {
	t_coords		coords;
	t_norm_vector	norm_vector;
	double			size;
	int				rgb;
}	t_square;

// Cylinder object
typedef struct s_cylinder {
	t_coords		coords;
	t_norm_vector	norm_vector;
	double			diameter;
	double			height;
	int				rgb;
}	t_cylinder;

// Triangle object
typedef struct s_triangle {
	t_coords	coords_1;
	t_coords	coords_2;
	t_coords	coords_3;
	int			rgb;
}	t_triangle;

typedef struct s_vars {
	int			save;
	t_res		res;
	t_ambient	ambient;
	t_list		*cam;
	t_list		*light;
	t_list		*sphere;
	t_list		*plane;
	t_list		*square;
	t_list		*cylinder;
	t_list		*triangle;
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