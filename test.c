/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/26 15:29:16 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/04/26 16:30:58 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int main()
{
    double x = 1;

    printf("%f\n", tan(x));
    printf("%f\n", atan(x));
    printf("%f\n", tanh(x));

    return 1;
}