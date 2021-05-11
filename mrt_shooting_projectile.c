/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_shooting_projectile.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/11 16:41:21 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/05/11 17:13:52 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/miniRT.h"
#include "includes/coords.h"
#include "includes/error_msg.h"
#include <stdio.h>

typedef struct s_projectile {
	t_tuple	*position;
	t_tuple	*velocity;
}	t_projectile;

typedef struct s_environment {
	t_tuple	*gravity;
	t_tuple	*wind;
}	t_environment;

static void	*calloc_and_protect(void *pointer)
{
	pointer = ft_calloc(1, sizeof(pointer));
	if (!pointer)
		mrt_error_msg(0, "Unable to allocate memory");
	return (pointer);
}

static void	tick(t_projectile *p, t_environment *e)
{
	mrt_tuple_add(p->velocity, e->gravity);
	mrt_tuple_add(p->velocity, e->wind);
	mrt_tuple_add(p->position, p->velocity);
}

void    mrt_shooting_projectile(t_data *data)
{
	t_projectile	*pro;
	t_environment	*env;
	int             i;

	pro = calloc_and_protect(pro);
	env = calloc_and_protect(env);
	pro->position = mrt_point_create(0, 1, 0);
	pro->velocity = mrt_vector_2_create(1, 1.8, 0);
	mrt_tuple_normalize(pro->velocity);
	pro->velocity->x *= 11.25;
	pro->velocity->y *= 11.25;
	pro->velocity->z *= 11.25;
	env->wind = mrt_vector_2_create(-0.01, 0, 0);
	env->gravity = mrt_vector_2_create(0, -0.1, 0);
		i = 0;
	while (pro->position->y >= 0.0)
	{
		tick(pro, env);
		my_mlx_pixel_put(data, (int)pro->position->x, data->r_height - (int)pro->position->y, 0xFF0000);
		printf("[pro: %d, %d, %d]\n", (int)pro->position->x, data->r_height - (int)pro->position->y, (int)pro->position->z);
		i++;
	}
}
