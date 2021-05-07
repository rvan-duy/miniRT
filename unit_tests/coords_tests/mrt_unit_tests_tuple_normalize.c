/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_tuple_normalize.c                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 18:41:28 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 18:58:00 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/coords.h"
#include <stdio.h>
#include <stdlib.h>

static void tuple_test_1()
{
    t_tuple *t1;
    t_tuple *t2;

    t1 = mrt_vector_2_create(10, 0, 0);
    t2 = mrt_vector_2_create(1, 0, 0);
    mrt_tuple_normalize(t1);
    if (mrt_tuple_compare(t1, t2))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t1);
    free(t2);
    return ;
}

static void tuple_test_2()
{
    t_tuple *t1;
    t_tuple *t2;

    t1 = mrt_vector_2_create(1, 2, 3);
    t2 = mrt_vector_2_create(0.26726, 0.53452, 0.80178);
    mrt_tuple_normalize(t1);
    if (mrt_tuple_compare(t1, t2))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t1);
    free(t2);
    return ;
}

static void tuple_test_3()
{
    t_tuple *t1;
    t_tuple *t2;

    t1 = mrt_vector_2_create(-1, -2, -3);
    t2 = mrt_vector_2_create(-0.26726, -0.53452, -0.80178);
    mrt_tuple_normalize(t1);
    if (mrt_tuple_compare(t1, t2))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t1);
    free(t2);
    return ;
}

static void tuple_test_4()
{
    t_tuple *t1;
    t_tuple *t2;

    t1 = mrt_vector_2_create(1, 0, 0);
    t2 = mrt_vector_2_create(1, 0, 0);
    mrt_tuple_normalize(t1);
    if (mrt_tuple_compare(t1, t2))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t1);
    free(t2);
    return ;
}

void    mrt_unit_tests_tuple_normalize()
{
    printf("mrt_tuple_normalize: ");
    tuple_test_1();
    tuple_test_2();
    tuple_test_3();
    tuple_test_4();
    printf("\n\e[0m");
    return ;    
}
