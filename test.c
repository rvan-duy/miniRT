/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/26 15:29:16 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/30 16:40:06 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

double	rad_to_deg(double radians)
{
	return (radians / (2 * M_PI) * 360);
}

double	deg_to_rad(double degrees)
{
	return (degrees / 360 * 2 * M_PI);
}

int main()
{
    double x = 35;
    double y = deg_to_rad(x);

    printf("tan(%.0f°) is: %f\n", x, tan(x));
    printf("tan(%.0f) is: %f\n", y, tan(y));
    return 1;
}
