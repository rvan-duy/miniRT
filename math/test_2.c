/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_2.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/28 14:49:00 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/28 14:54:09 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	double	matrix44d[5][4];
	matrix44d[0][0] = 1.2;
	//{{1.2, 2.1, 3.3, 4.0}, {2.1, 3.3, 1.8, 4.3}, {0.0, 0.0, 1.1, 2.2}, {1.3, 1.1, 1.9, 2.4}, {0.3, 2.1, 2.9, 3.4}};
	//mrt_math_matrix_display(matrix44d, 2);
	int		len;
	len = sizeof(matrix44d) / sizeof(matrix44d[0]);
	printf("%d\n", len);
	return (1);
}
