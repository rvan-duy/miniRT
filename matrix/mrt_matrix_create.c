/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_matrix_create.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/12 12:59:35 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/12 13:37:16 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/error_msg.h"

double	**mrt_matrix_create(int row, int col)
{
	double	**new_matrix;
	int		i;

	new_matrix = ft_calloc(row, sizeof(double **));
	if (!new_matrix)
		mrt_error_msg(0, "Unable to allocate memory");
	i = 0;
	while (i < row)
	{
		new_matrix[i] = ft_calloc(col, sizeof(double *));
		if (!new_matrix[i])
			mrt_error_msg(0, "Unable to allocate memory");
		i++;
	}
	return (new_matrix);
}
