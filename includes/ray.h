/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ray.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 15:40:57 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/06 15:03:39 by rvan-duy      ########   odam.nl         */
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

t_coords	mrt_ray_pos_get(t_ray *r, double t);
t_coords	mrt_ray_left_corner_calc(t_vars *v, t_ray *ray);
int			mrt_ray_collision_check(t_ray *ray, t_vars *var);
int			mrt_ray_sphere(t_vector *v, t_list *list);


#endif