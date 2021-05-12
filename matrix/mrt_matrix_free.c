/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_matrix_free.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/12 13:20:21 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/12 13:45:44 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	mrt_matrix_free(double **matrix, int row)
{
	row--;
	while (row > 0)
	{
		free(matrix[row]);
		row--;
	}
	free(matrix);
}
