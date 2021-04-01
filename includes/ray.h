/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ray.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 15:40:57 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/01 14:08:29 by rvan-duy      ########   odam.nl         */
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
double		mrt_ray_collision_check(t_ray *ray, t_vars *var);
double		mrt_ray_sphere(t_coords P, t_list *list);


#endif