/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_matrix_row_insert.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/12 14:55:37 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/12 15:00:16 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"

// Function inserts a row inside the matrix
// - row: pointer of the row of where it should be inserted
// - values: the values to be inserted
void	mrt_matrix_row_insert(double *row, t_tuple *values)
{
	row[0] = values->x;
	row[1] = values->y;
	row[2] = values->z;
	row[3] = values->w;
}
