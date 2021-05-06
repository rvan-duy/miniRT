/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   coords.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 17:32:21 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/06 18:34:39 by rvan-duy      ########   odam.nl         */
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

t_tuple	*mrt_tuple_create(double x, double y, double z, double w);
int		mrt_tuple_compare(t_tuple *t1, t_tuple *t2);
t_tuple	*mrt_vector_2_create(double x, double y, double z);
t_tuple *mrt_point_create(double x, double y, double z);

#endif
