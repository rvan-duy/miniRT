# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <rvan-duy@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/24 10:55:49 by rvan-duy      #+#    #+#                  #
#    Updated: 2021/05/10 12:57:55 by rvan-duy      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = miniRT
CC = gcc
SRCS = main.c \
		input_check/mrt_input_check.c \
		input_check/mrt_argv_check.c \
		input_check/mrt_rt_file_read.c \
		input_check/mrt_parse_utils_1.c \
		input_check/mrt_parse_utils_2.c \
		input_check/mrt_parse_utils_3.c \
		input_check/mrt_resolution_parse.c \
		input_check/mrt_ambient_parse.c \
		input_check/mrt_camera_parse.c \
		input_check/mrt_light_parse.c \
		input_check/mrt_sphere_parse.c \
		input_check/mrt_plane_parse.c \
		input_check/mrt_square_parse.c \
		input_check/mrt_cylinder_parse.c \
		input_check/mrt_triangle_parse.c \
		input_check/mrt_scene_check.c \
		error_msg/mrt_error_msg.c \
		struct_init/mrt_vars_init.c \
		color/mrt_color_get.c \
		color/mrt_color_shade_add.c \
		color/mrt_color_invert.c \
		coords/mrt_tuple_create.c \
		coords/mrt_tuple_compare.c \
		coords/mrt_point_create.c \
		coords/mrt_vector_create.c \
		coords/mrt_tuple_add.c \
		coords/mrt_tuple_subtract.c \
		coords/mrt_tuple_negate.c \
		coords/mrt_tuple_scale.c \
		coords/mrt_tuple_magnitude.c \
		coords/mrt_double_compare.c \
		coords/mrt_tuple_normalize.c \
		coords/mrt_tuple_dot_product.c \
		coords/mrt_tuple_cross_product.c \
		math/mrt_math_magnitude_calc.c \
		math/mrt_math_norm_vector_calc.c \
		math/mrt_math_utils_1.c \
		math/mrt_math_aspect_ratio.c \
		print/mrt_rt_file_print.c \
		print/mrt_print_coords.c \
		screenshot/mrt_bmp_create.c \
		ray/mrt_ray_pos_get.c \
		ray/mrt_ray_vars_init.c \
		ray/mrt_ray_direction_calc.c \
		ray/mrt_ray_collision_check.c \
		ray/mrt_ray_sphere.c \
		unit_tests/mrt_unit_tests_start.c \
		unit_tests/coords_tests/mrt_unit_tests_coords.c \
		unit_tests/coords_tests/mrt_unit_tests_tuple.c \
		unit_tests/coords_tests/mrt_unit_tests_vector.c \
		unit_tests/coords_tests/mrt_unit_tests_point.c \
		unit_tests/coords_tests/mrt_unit_tests_tuple_add.c \
		unit_tests/coords_tests/mrt_unit_tests_tuple_subtract.c \
		unit_tests/coords_tests/mrt_unit_tests_tuple_negate.c \
		unit_tests/coords_tests/mrt_unit_tests_tuple_scale.c \
		unit_tests/coords_tests/mrt_unit_tests_magnitude.c \
		unit_tests/coords_tests/mrt_unit_tests_double.c \
		unit_tests/coords_tests/mrt_unit_tests_tuple_normalize.c \
		unit_tests/coords_tests/mrt_unit_tests_dot_product.c \
		unit_tests/coords_tests/mrt_unit_tests_cross_product.c \
		unit_tests/coords_tests/mrt_unit_tests_tuple_special.c \
		unit_tests/color_tests/mrt_unit_tests_color.c \
		unit_tests/color_tests/mrt_unit_tests_color_create.c \
		unit_tests/color_tests/mrt_unit_tests_color_get.c \
		mrt_events.c
FLAGS = -g -fsanitize=address -Wall -Wextra -Werror
UNUSED  = -Wno-unused-variable -Wno-unused-parameter -Wno-unused-function
OBJ = $(SRCS:%.c=%.o)
MLX = libmlx.a
LIBFT = libft.a

all: $(NAME)

#MacOS
%.o: %.c
	$(CC) $(UNUSED) -Imlx -c $< -o $@

#Linux
#%.o: %.c
#$(CC) $(UNUSED) -c $< -o $@

#Linux
#$(NAME): $(OBJ)
#$(CC) $(FLAGS) $(OBJ) -Lmlx_linux -Llibft -lft -lmlx -lXext -lX11 -lm -lz -o $(NAME)

#MacOS
$(NAME): $(OBJ)
	$(CC) $(OBJ) -Llibft -lft -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean:
	@/bin/rm -f *.o
	@/bin/rm -f input_check/*.o
	@/bin/rm -f error_msg/*.o
	@/bin/rm -f struct_init/*.o
	@/bin/rm -f print/*.o
	@/bin/rm -f color/*.o
	@/bin/rm -f math/*.o
	@/bin/rm -f screenshot/*.o
	@/bin/rm -f ray/*.o
	@/bin/rm -f coords/*.o
	@/bin/rm -f unit_tests/*.o
	@/bin/rm -f unit_tests/coords_tests/*.o

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f a.out

re: fclean all

test: clean all
	./$(NAME) minimalist.rt