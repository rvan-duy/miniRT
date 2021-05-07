/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_magnitude.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 15:57:37 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 18:56:54 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/coords.h"
#include <stdio.h>
#include <stdlib.h>

static void magnitude_test_1()
{
    t_tuple     *t;
    double      magnitude;

    t = mrt_vector_2_create(0, 1, 0);
    magnitude = mrt_tuple_magnitude(t);
    if (mrt_double_compare(1.0, magnitude))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t);
    return ;
}

static void magnitude_test_2()
{
    t_tuple     *t;
    double      magnitude;

    t = mrt_vector_2_create(0, 0, 1);
    magnitude = mrt_tuple_magnitude(t);
    if (mrt_double_compare(1.0, magnitude))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t);
    return ;
}

static void magnitude_test_3()
{
    t_tuple     *t;
    double      magnitude;

    t = mrt_vector_2_create(1, 2, 3);
    magnitude = mrt_tuple_magnitude(t);
    if (mrt_double_compare(3.7416573, magnitude))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t);
    return ;
}

static void magnitude_test_4()
{
    t_tuple     *t;
    double      magnitude;

    t = mrt_vector_2_create(-1, -2, -3);
    magnitude = mrt_tuple_magnitude(t);
    if (mrt_double_compare(3.7416573, magnitude))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t);
    return ;
}

void        mrt_unit_tests_magnitude()
{
    printf("mrt_tuple_magnitude: ");
    magnitude_test_1();
    magnitude_test_2();
    magnitude_test_3();
    magnitude_test_4();
    printf("\n\e[0m");
    return ;  
};