/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_unit_tests_tuple_special.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/08 15:57:07 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/08 18:32:38 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coords.h"
#include "../includes/error_msg.h"
#include "../includes/libft.h"
#include <stdio.h>

// These tests calculate the distance a projectile
// traveled based on the velocity.
// The velocity is influenced by a gravity vector and a wind vector.

typedef struct s_projectile {
	t_tuple	*position;
	t_tuple	*velocity;
}	t_projectile;

typedef struct s_environment {
	t_tuple	*gravity;
	t_tuple	*wind;
}	t_environment;

static void	tick(t_projectile *p, t_environment *e)
{
	mrt_tuple_add(p->velocity, e->gravity);
	mrt_tuple_add(p->velocity, e->wind);
	mrt_tuple_add(p->position, p->velocity);
}

static void	*calloc_and_protect(void *pointer)
{
	pointer = ft_calloc(1, sizeof(pointer));
	if (!pointer)
		mrt_error_msg(0, "Unable to allocate memory");
	return (pointer);
}

static void	free_all(t_projectile *p, t_environment *e)
{
	free(p->position);
	free(p->velocity);
	free(p);
	free(e->gravity);
	free(e->wind);
	free(e);
}

// this leaks idk why
static void	special_test_1(void)
{
	t_projectile	*p;
	t_environment	*e;
	int				i;

	p = calloc_and_protect(p);
	e = calloc_and_protect(e);
	p->position = mrt_point_create(0, 1, 0);
	p->velocity = mrt_vector_2_create(1, 1, 0);
	e->gravity = mrt_vector_2_create(0, -0.1, 0);
	e->wind = mrt_vector_2_create(-0.01, 0, 0);
	mrt_tuple_normalize(p->velocity);
	i = 0;
	while (p->position->y >= 0.0)
	{
		tick(p, e);
		i++;
	}
	if (p->position->y < 0 && i == 15)
		printf("\x1B[32m[OK] ");
	else
		printf("\x1B[31m[KO] ");
	free_all(p, e);
}

void	mrt_unit_tests_tuple_special(void)
{
	printf("mrt_special_tuple_tests: ");
	special_test_1();
	printf("\n\e[0m");
}
