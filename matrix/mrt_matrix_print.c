/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_matrix_print.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 18:51:51 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/12 16:07:23 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Function prints a matrix of doubles for r rows and c columns
void	mrt_matrix_print(double **matrix, int row, int col)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		printf("|");
		while (col < 4)
		{
			printf(" %.2f |", matrix[row][col]);
			col++;
		}
		printf("\n");
		row++;
	}
}
