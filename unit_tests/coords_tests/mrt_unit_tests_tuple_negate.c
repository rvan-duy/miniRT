/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_tuple_negate.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/07 13:57:48 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/07 14:01:53 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/coords.h"
#include <stdio.h>
#include <stdlib.h>

static void tuple_test_1()
{
    t_tuple *t1;
    t_tuple *t2;

    t1 = mrt_vector_2_create(0.1, 0.99, -0.11);
    t2 = mrt_vector_2_create(-0.1, -0.99, 0.11);
    mrt_tuple_negate(t1);
    if (mrt_tuple_compare(t1, t2))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t1);
    free(t2);
    return ;
}

void        mrt_unit_tests_tuple_negate()
{
    printf("mrt_tuple_negate: ");
    tuple_test_1();
    printf("\n\e[0m");
    return ;
}