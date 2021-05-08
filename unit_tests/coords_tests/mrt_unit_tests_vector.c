/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_vector.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/06 18:25:04 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:24:39 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/coords.h"
#include "../../includes/error_msg.h"
#include <stdio.h>
#include <stdlib.h>

static void	vector_test(void)
{
	t_tuple	*t1;
	t_tuple	*t2;

	t1 = malloc(sizeof(t_tuple));
	if (!t1)
		mrt_error_msg(0, "Unable to allocate memory");
	t1->x = 1.2;
	t1->y = 3.4;
	t1->z = -4.500000001;
	t1->w = 0.0;
	t2 = mrt_vector_2_create(t1->x, t1->y, t1->z);
	if (mrt_tuple_compare(t1, t2))
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free(t1);
	free(t2);
}

void	mrt_unit_tests_vector(void)
{
	printf("mrt_vector_create: ");
	vector_test();
	printf("\n\e[0m");
}
