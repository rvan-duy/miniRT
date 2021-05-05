/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_2.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 13:11:58 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/04 15:01:25 by rvan-duy      ########   odam.nl         */
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

double	deg_2_rad(double degrees)
{
	return (degrees * M_PI / 180);
}

void print_arr(double arr[5])
{
	for (int i = 0; i < 5; i++)
		printf("[%f] ", arr[i]);
	printf("\n");
	return ;
}

double raster_to_camera(double n, char axis, double aspect_ratio)
{
	if (!n)
		return 0;
	
	// Raster to NDC
	n = (n + 0.5) / 1000;

	// NDC to Screen
	n = 1 - 2 * n;
	
	// Screen to Camera
	if (axis == 'x')
		n = (2 * n - 1) * aspect_ratio;
	else if (axis == 'y')
		n = 1 - 2 * n;

	// tan
	double i = tan(90 / 2 * M_PI / 180);
	n = n * i;

	return n;
}

double	aspect_ratio_calc(int width, int height)
{
	double	aspect_ratio;

	aspect_ratio = (double)width / (double)height;
	return (aspect_ratio);
}

/*
	aspect ratio
	calcs for x (camera space)
	calcs for y (camera space)
	vector rayOrigin 0,0,0 (camera space)
	matrix ??? 4x4
	vector rayOrigin RayDirection (world space)
	

 */




int main(void)
{
	/*double array[5] = {25, 50, 75, 0, 2};
	double aspect_ratio = aspect_ratio_calc(1200, 1000);
	print_arr(array);
	for (int i = 0; i < 5; i++)
		array[i] = raster_to_camera(array[i], 'x', aspect_ratio);
	print_arr(array);
	printf("aspect ratio: %f\n", aspect_ratio);*/

	// double number = 180;
	// number *= 0.5;
	// number = number / (2 * M_PI) * 360;
	// number = tan(number);
	// printf("number: %f\n", number);

	double fov = 90;
	double scale = deg_2_rad(fov * 0.5);
	printf("scale: %f %f\n", scale, fov);
	return 1;
}