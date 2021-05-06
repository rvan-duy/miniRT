/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_coords.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 17:32:07 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/06 17:59:11 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"
#include "../includes/error_msg.h"
#include <stdio.h>
#include <stdlib.h>

static int  compare_tuple(t_tuple *t1, t_tuple *t2)
{
    if (t1->x - t2->x < 0.0001 && \
        t1->y - t2->y < 0.0001 && \
        t1->z - t2->z < 0.0001 && \
        t1->w - t2->w < 0.0001)
        return (1);
    return (0);
}

static void coord_test_1()
{
    t_tuple *t1;
    t_tuple *t2;

    t1 = malloc(sizeof(t_tuple));
    if (!t1)
        mrt_error_msg(0, "Unable to allocate memory");
    t1->x = 1.2;
    t1->y = 3.4;
    t1->z = -4.500000001;
    t1->w = 1.0;
    t2 = mrt_tuple_create(1.20000001, 3.4, -4.5, 1.0);
    if (compare_tuple(t1, t2))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t1);
    free(t2);
    return ;
}

static void coord_test_2()
{
    t_tuple *t1;
    t_tuple *t2;

    t1 = malloc(sizeof(t_tuple));
    if (!t1)
        mrt_error_msg(0, "Unable to allocate memory");
    t1->x = 1.2;
    t1->y = 3.4;
    t1->z = -4.500000001;
    t1->w = 0.0;
    t2 = mrt_tuple_create(1.20000001, 3.4, -4.5, 0.0);
    if (compare_tuple(t1, t2))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t1);
    free(t2);
    return ;
}

static void coord_test_3()
{
    t_tuple *t1;
    t_tuple *t2;

    t1 = malloc(sizeof(t_tuple));
    if (!t1)
        mrt_error_msg(0, "Unable to allocate memory");
    t1->x = 1.2;
    t1->y = 3.4;
    t1->z = -4.500000001;
    t1->w = 1.0;
    t2 = mrt_tuple_create(1.20000001, 3.4, -4.5, 870.0);
    if (compare_tuple(t1, t2))
        printf("\x1B[32m[OK] ");
    else
        printf("\x1B[31m[KO] ");
    free(t1);
    free(t2);
    return ;
}

void        mrt_unit_tests_coords()
{
    printf("mrt_tuple_create: ");
    coord_test_1();
    coord_test_2();
    coord_test_3();
    printf("\n");
    return ;
}
