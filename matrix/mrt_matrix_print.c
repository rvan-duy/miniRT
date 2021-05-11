/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_matrix_print.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 18:51:51 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 20:08:07 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_matrix {
	double	**matrix;
	int		row;
	int		column;
}	t_matrix;

// Function prints a matrix of doubles for r rows and c columns
void	mrt_matrix44d_print(double **matrix, int r, int c)
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		printf("|");
		while (column < 4)
		{
			printf(" %.2f |", matrix[row][column]);
			column++;
		}
		printf("\n");
		row++;
	}
}
