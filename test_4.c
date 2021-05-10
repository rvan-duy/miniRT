/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_4.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/10 14:01:33 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/10 17:52:51 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	mrt_color_red_get(int rgb)
{
	return (rgb & (0xFF << 16));
}

typedef struct s_rgb {
   double x;
   double y;
   double z;
}  t_rgb;

int main(void)
{
   t_rgb color1;
   color1.x = 255;
   color1.y = 255;
   color1.z = 0;
   int i = 0xFF0000;
   int color = mrt_color_red_get(i);
   
   printf("%f\n", (double)color);

   return (0);    
}
