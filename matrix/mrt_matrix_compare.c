/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_matrix_compare.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/12 16:09:30 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/12 16:14:48 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"

// Function compares two matrices
// 1 if matrix1 == matrix2
// 2 if matrix1 != matrix2
int	mrt_matrix_compare(double **matrix1, double **matrix2, int row, int col)
{
	int	saved_col;

	saved_col = col;
	while (row > 0)
	{
		col = saved_col;
		while (col > 0)
		{
			if (!mrt_double_compare(matrix1[row][col], matrix1[row][col]))
				return (0);
			col--;
		}
		row--;
	}
	return (1);
}
