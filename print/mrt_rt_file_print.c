/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mrt_rt_file_print.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 11:00:46 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/20 12:24:57 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h" // t_vars defines
#include <stdio.h> // printf

static void	mrt_rt_file_print_save(t_vars *v)
{
	if (v->save == TRUE)
		p("- save:\t\t\t\t\tTRUE\n");
	if (v->save == FALSE)
		p("- save:\t\t\t\t\tFALSE\n");
}

static void	mrt_rt_file_print_res(t_vars *v)
{
	if (v->res.status == TRUE)
	{
		p("- res:\t\theight:\t\t\t%d\n", v->res.height);
		p("      \t\twidth:\t\t\t%d\n", v->res.width);
	}
	else
		p("- res: FALSE\n");
}

static void	mrt_rt_file_print_ambient(t_vars *v)
{
	if (v->ambient.status == TRUE)
	{
		p("- ambient:\tratio:\t\t\t%f\n", v->ambient.ratio);
		p("\t\trgb:\t\t\t%X\n", v->ambient.rgb);
	}
	else
		p("- ambient:\t\t\t\t\tFALSE\n");
}

static void	mrt_rt_file_print_camera(t_vars *v)
{
	int         i;
	t_camera    *tmp;

	i = 1;
	while (v->cam->next != NULL)
	{
		v->cam = v->cam->next;
		tmp = v->cam->content;
		p("- camera (%d):\tcoords:\t\t", i);
		p("x\t%f\n\t\t\t\ty\t%f\n\t\t\t\t", tmp->coords.x, tmp->coords.y);
		p("z\t%f\n", tmp->coords.z);
		p("\t\tnorm_vector:\tx\t%f\n\t\t\t", tmp->norm_vector.x);
		p("\ty\t%f\n\t\t\t\tz\t%f\n", tmp->norm_vector.y, tmp->norm_vector.z);
		p("\t\tfov:\t\t\t%d\n", tmp->fov);
		i++;
	}
}

static void	mrt_rt_file_print_light(t_vars *v)
{
	int		i;
	t_light	*tmp;

	i = 1;
	while (v->light->next != NULL)
	{
		v->light = v->light->next;
		tmp = v->light->content;
		p("- light (%d):\tcoords:\t\t", i);
		p("x\t%f\n\t\t\t\ty\t%f\n\t\t\t\t", tmp->coords.x, tmp->coords.y);
		p("z\t%f\n", tmp->coords.z);
		p("\t\tratio:\t\t\t%f\n", tmp->ratio);
		p("\t\trgb:\t\t\t%X\n", tmp->rgb);
		i++;
	}	
}

static void	mrt_rt_file_print_sphere(t_vars *v)
{
	int			i;
	t_sphere	*tmp;

	i = 1;
	while (v->sphere->next != NULL)
	{
		v->sphere = v->sphere->next;
		tmp = v->sphere->content;
		p("- sphere (%d):\tcoords:\t\t", i);
		p("x\t%f\n\t\t\t\ty\t%f\n\t\t\t\t", tmp->coords.x, tmp->coords.y);
		p("z\t%f\n", tmp->coords.z);
		p("\t\tdiameter:\t\t%f\n", tmp->diameter);
		p("\t\trgb:\t\t\t%X\n", tmp->rgb);
		i++;
	}
}

static void mrt_rt_file_print_plane(t_vars *v)
{
	int		i;
	t_plane	*tmp;

	i = 1;
	while (v->plane->next != NULL)
	{
		v->plane = v->plane->next;
		tmp = v->plane->content;
		p("- plane (%d):\tcoords:\t\t", i);
		p("x\t%f\n\t\t\t\ty\t%f\n\t\t\t\t", tmp->coords.x, tmp->coords.y);
		p("z\t%f\n", tmp->coords.z);
		p("\t\tnorm_vector:\tx\t%f\n\t\t\t", tmp->norm_vector.x);
		p("\ty\t%f\n\t\t\t\tz\t%f\n", tmp->norm_vector.y, tmp->norm_vector.z);
		p("\t\trgb:\t\t\t%X\n", tmp->rgb);
		i++;
	}
}

static void	mrt_rt_file_print_square(t_vars *v)
{
	int			i;
	t_square	*tmp;

	i = 1;
	while (v->square->next != NULL)
	{
		v->square = v->square->next;
		tmp = v->square->content;
		p("- square (%d):\tcoords:\t\t", i);
		p("x\t%f\n\t\t\t\ty\t%f\n\t\t\t\t", tmp->coords.x, tmp->coords.y);
		p("z\t%f\n", tmp->coords.z);
		p("\t\tnorm_vector:\tx\t%f\n\t\t\t", tmp->norm_vector.x);
		p("\ty\t%f\n\t\t\t\tz\t%f\n", tmp->norm_vector.y, tmp->norm_vector.z);
		p("\t\tsize:\t\t\t%f\n", tmp->size);
		p("\t\trgb:\t\t\t%X\n", tmp->rgb);
		i++;
	}
}

static void	mrt_rt_file_print_cylinder(t_vars *v)
{
	int			i;
	t_cylinder	*tmp;

	i = 1;
	while (v->cylinder->next != NULL)
	{
		v->cylinder = v->cylinder->next;
		tmp = v->cylinder->content;
		p("- cylinder (%d):\tcoords:\t", i);
		p("x\t%f\n\t\t\ty\t%f\n\t\t\t", tmp->coords.x, tmp->coords.y);
		p("z\t%f\n", tmp->coords.z);
		p("\t\tnorm_vector:\tx\t%f\n\t\t\t", tmp->norm_vector.x);
		p("y\t%f\n\t\t\tz\t%f\n", tmp->norm_vector.y, tmp->norm_vector.z);
		p("\t\tdiameter:\t%f\n", tmp->diameter);
		p("\t\theight:\t\t%f\n", tmp->height);
		p("\t\trgb:\t\t%X\n", tmp->rgb);
		i++;
	}
}

static void	mrt_rt_file_print_triangle(t_vars *v)
{
	int			i;
	t_triangle	*tmp;

	i = 1;
	while (v->triangle->next != NULL)
	{
		v->triangle = v->triangle->next;
		tmp = v->triangle->content;
		p("- triangle (%d):\tcrds_1:\t", i);
		p("x\t%f\n\t\t\ty\t%f\n\t\t\t", tmp->coords_1.x, tmp->coords_1.y);
		p("z\t%f\n", tmp->coords_1.z);
		p("\t\tcrds_2:\t");
		p("x\t%f\n\t\t\ty\t%f\n\t\t\t", tmp->coords_2.x, tmp->coords_2.y);
		p("z\t%f\n", tmp->coords_2.z);
		p("\t\tcrds_3:\t");
		p("x\t%f\n\t\t\ty\t%f\n\t\t\t", tmp->coords_3.x, tmp->coords_3.y);
		p("z\t%f\n", tmp->coords_3.z);
		p("\t\trgb:\t\t%X\n", tmp->rgb);
		i++;
	}
}

void	mrt_rt_file_print(t_vars *v)
{
	p("*/--- t_vars struct ---\\*\n");
	p("-------------------------\n");
	mrt_rt_file_print_save(v);
	mrt_rt_file_print_res(v);
	mrt_rt_file_print_ambient(v);
	mrt_rt_file_print_camera(v);
	mrt_rt_file_print_light(v);
	mrt_rt_file_print_sphere(v);
	mrt_rt_file_print_plane(v);
	mrt_rt_file_print_square(v);
	mrt_rt_file_print_cylinder(v);
	mrt_rt_file_print_triangle(v);
	p("--------------------------------\n");
	p("*\\--- t_vars end of struct ---*/\n");
}
