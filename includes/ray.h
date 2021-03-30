/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ray.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 15:40:57 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/30 15:45:19 by rvan-duy      ########   odam.nl         */
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

t_coords	mrt_ray_colour_pos_get(t_ray *r, double t);

#endif