/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_dot_product.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 19:12:50 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 19:21:03 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/coords.h"
#include <stdio.h>
#include <stdlib.h>

static void tuple_test_1()
{
    t_tuple *t1;
    t_tuple *t2;

    t1 = mrt_vector_2_create(10, 2, 3);
    t2 = mrt_vector_2_create(1, 2, 3);
    if (mrt_double_compare(mrt_tuple_dot_product(t1, t2), 23))
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
    t2 = mrt_vector_2_create(2, 3, 4);
    if (mrt_double_compare(mrt_tuple_dot_product(t1, t2), 20))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t1);
    free(t2);
    return ;
}

void        mrt_unit_tests_dot_product()
{
    printf("mrt_tuple_dot_product ");
    tuple_test_1();
    tuple_test_2();
    printf("\n\e[0m");
    return ;    
}
