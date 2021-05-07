/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_tuple_add.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 13:02:48 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 13:33:24 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/coords.h"
#include "../../includes/error_msg.h"
#include <stdio.h>
#include <stdlib.h>

static void tuple_test_1()
{
    t_tuple *t1;
    t_tuple *t2;
    t_tuple *t3;

    t1 = mrt_vector_2_create(0.1, 0.99, -0.11);
    t2 = mrt_point_create(4, 3, 0);
    t3 = mrt_tuple_create(4.1, 3.99, -0.11, 1);
    mrt_tuple_add(t1, t2);
    if (mrt_tuple_compare(t1, t3))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t1);
    free(t2);
    free(t3);
    return ;
}

static void tuple_test_2()
{
    t_tuple *t1;
    t_tuple *t2;
    t_tuple *t3;

    t1 = mrt_vector_2_create(-0.1, -0.99, -0.11);
    t2 = mrt_vector_2_create(-4, -3, 0);
    t3 = mrt_tuple_create(-4.1, -3.99, -0.11, 0);
    mrt_tuple_add(t1, t2);
    if (mrt_tuple_compare(t1, t3))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t1);
    free(t2);
    free(t3);
    return ;
}

void        mrt_unit_tests_tuple_add()
{
    printf("mrt_tuple_add: ");
    tuple_test_1();
    tuple_test_2();
    printf("\n\e[0m");
    return ;
}
