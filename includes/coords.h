/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   coords.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 17:32:21 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 14:23:47 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef COORDS_H
# define COORDS_H

// 3 Types of tuple:
// vector (w = 0)
// color (w = 0)
// point (w = 1)

typedef struct s_tuple {
	double	x;
	double	y;
	double	z;
	double	w;
}	t_tuple;

t_tuple		*mrt_tuple_create(double x, double y, double z, double w);
t_tuple		*mrt_vector_2_create(double x, double y, double z);
t_tuple		*mrt_point_create(double x, double y, double z);

// Operations
int			mrt_tuple_compare(t_tuple *dst, t_tuple *src);
int			mrt_double_compare(double x, double y);
void		mrt_tuple_add(t_tuple *dst, t_tuple *src);
void		mrt_tuple_subtract(t_tuple *dst, t_tuple *src);
void		mrt_tuple_negate(t_tuple *src);
void		mrt_tuple_scale(t_tuple *src, double scale);
double		mrt_tuple_magnitude(t_tuple *src);
void		mrt_tuple_normalize(t_tuple *src);
double		mrt_tuple_dot_product(t_tuple *t1, t_tuple *t2);
t_tuple		*mrt_tuple_cross_product(t_tuple *t1, t_tuple *t2);

#endif
