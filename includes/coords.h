/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   coords.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 17:32:21 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 13:55:51 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef COORDS_H
# define COORDS_H

typedef struct s_tuple {
	double	x;
	double	y;
	double	z;
	double	w;
}   t_tuple;

t_tuple		*mrt_tuple_create(double x, double y, double z, double w);
t_tuple		*mrt_vector_2_create(double x, double y, double z);
t_tuple		*mrt_point_create(double x, double y, double z);

// Operations
int			mrt_tuple_compare(t_tuple *dst, t_tuple *src);
void		mrt_tuple_add(t_tuple *dst, t_tuple *src);
void		mrt_tuple_subtract(t_tuple *dst, t_tuple *src);
void		mrt_tuple_negate(t_tuple *src);

#endif
