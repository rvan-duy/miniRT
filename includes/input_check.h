/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 15:13:38 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/03/10 15:07:30 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_CHECK_H
# define INPUT_CHECK_H

#include "miniRT.h" // t_vars t_coords

void    mrt_input_check(int argc, char **argv, t_vars *v);
void    mrt_input_read(int argc, char **argv, t_vars *v);
void    mrt_argv_check(int argc, char **argv, t_vars *v);
void    mrt_rt_file_read(t_vars *v, char *file_name);

// Parsing functions
void    mrt_resolution_parse(char **split_line, t_vars *v, int line);
void    mrt_ambient_parse(char **split_line, t_vars *v, int line);
void    mrt_camera_parse(char **split_line, t_vars *v, int line);
void    mrt_light_parse(char **split_line, t_vars *v, int line);
void    mrt_sphere_parse(char **split_line, t_vars *v, int line);
void    mrt_plane_parse(char **split_line, t_vars *v, int line);
void	mrt_square_parse(char **split_line, t_vars *v, int line);

// Utilities
int     mrt_arr_size_check(char **arr);
void    mrt_comma_check(char *str, int line);
int     mrt_rgb_create(char *str, int line);
void    mrt_ratio_create(char *str, double *ratio, int line);
void    mrt_coords_create(char *str, t_coords *c, int line);
void    mrt_vector_create(char *str, t_vector *v, int line);
void    mrt_fov_create(char *str, int *fov, int line);
void    mrt_diameter_create(char *str, double *diameter, int line);
void    mrt_size_create(char *str, double *size, int line);

#endif