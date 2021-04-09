/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ray.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 15:40:57 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/09 17:47:09 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_H
# define RAY_H

# include "miniRT.h" // t_coords t_vector

// Ray object
typedef struct s_ray {
	t_coords	origin;
	t_vector	direction;
}	t_ray;

// Viewport object
typedef struct s_viewport {
	t_coords	horizontal;
	t_coords	vertical;
}	t_viewport;

// Ray variables
typedef struct s_ray_vars {
	t_viewport	viewport;
	t_coords	lower_left_corner;
	double		u;
	double		v;
}	t_ray_vars;

void		mrt_ray_vars_init(t_ray_vars *rv, t_vars *v);
void		mrt_ray_direction_calc(t_ray *ray, t_ray_vars *rv, t_vars *v);
void		mrt_ray_pos_get(t_coords *pos, t_ray *r, double t);
int			mrt_ray_collision_check(t_ray *ray, t_vars *var);
int			mrt_ray_sphere(t_vector *v, t_list *list);

#endif