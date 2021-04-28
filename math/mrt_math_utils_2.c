/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_math_utils_2.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/28 14:00:19 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/28 17:39:05 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include "../includes/libft.h"
#include <stdio.h>

void	mrt_math_matrix_display(double **matrix, int precision)
{
	int	i;
	int	j;

	j = 0;
	p("Printing a 4x4 matrix of doubles:\n");
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			p("%.*f ", precision, matrix[j][i]);
			i++;
		}
		p("\n");
		j++;
	}
	return ;
}

double *mrt_math_matrix_fill_row(double a, double b, double c, double e)
{
	double *new_matrix;
	
	new_matrix = ft_calloc(5, sizeof(double));
	new_matrix[0] = a;
	new_matrix[1] = b;
	new_matrix[2] = c;
	new_matrix[3] = e;
	return (new_matrix);
}

int	main(void)
{
	double **matrix44d;
	matrix44d[0] = mrt_math_matrix_fill_row(1.0, 1.2, 1.3, 1.9);
	matrix44d[1] = mrt_math_matrix_fill_row(1.0, 1.2, 1.3, 1.9);
	matrix44d[2] = mrt_math_matrix_fill_row(1.0, 1.2, 1.3, 1.9);
	matrix44d[3] = mrt_math_matrix_fill_row(1.0, 1.2, 1.3, 1.9);
	mrt_math_matrix_display(matrix44d, 2);

	return 1;
}