/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/09 15:12:02 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/09 15:13:43 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    assign_float(float *f)
{
    *f = 10.0;
}

int main(void)
{
    float f = 0;

    assign_float(&f);
    printf("%f\n", f);
}