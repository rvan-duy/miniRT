/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   unit_tests.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 18:10:40 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 16:04:49 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_TESTS_H
# define UNIT_TESTS_H

// Start tests
void	mrt_unit_tests_start(void);

// Coords tests
void	mrt_unit_tests_coords(void);
void	mrt_unit_tests_double(void);
void	mrt_unit_tests_tuple(void);
void	mrt_unit_tests_point(void);
void	mrt_unit_tests_vector(void);
void	mrt_unit_tests_tuple_add(void);
void	mrt_unit_tests_tuple_subtract(void);
void	mrt_unit_tests_tuple_negate(void);
void	mrt_unit_tests_tuple_scale(void);
void	mrt_unit_tests_magnitude(void);
void	mrt_unit_tests_tuple_normalize(void);
void	mrt_unit_tests_dot_product(void);
void	mrt_unit_tests_cross_product(void);
void	mrt_unit_tests_tuple_special(void);

// Color tests
void	mrt_unit_tests_color(void);
void	mrt_unit_tests_color_create(void);
void	mrt_unit_tests_color_get(void);
void	mrt_unit_tests_color_percent(void);

#endif
