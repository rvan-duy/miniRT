/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   matrix.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/12 13:10:58 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/12 15:01:08 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

# include "coords.h"

double	**mrt_matrix_create(int row, int col);
void	mrt_matrix_free(double **matrix, int row);
void	mrt_matrix_row_insert(double *row, t_tuple *values);

#endif