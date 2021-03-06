/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_double_compare.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 17:40:28 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 17:34:35 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include <math.h>

// Function compares two doubles
int	mrt_double_compare(double x, double y)
{
	if (fabs(x - y) < EPSILON)
		return (1);
	return (0);
}
