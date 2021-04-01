# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <rvan-duy@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/24 10:55:49 by rvan-duy      #+#    #+#                  #
#    Updated: 2021/04/01 16:47:21 by rvan-duy      ########   odam.nl          #
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
		math/mrt_math_magnitude_calc.c \
		math/mrt_math_norm_vector_calc.c \
		print/mrt_rt_file_print.c \
		screenshot/mrt_bmp_create.c \
		math/mrt_math_vector_operators.c \
		math/mrt_math_coords_operators.c \
		ray/mrt_ray_pos_get.c \
		ray/mrt_ray_collision_check.c \
		ray/mrt_ray_sphere.c \
		mrt_events.c
FLAGS = -Wall -Wextra -Werror
UNUSED  = -Wno-unused-variable -Wno-unused-parameter -Wno-unused-function
OBJ = $(SRCS:%.c=%.o)
MLX = libmlx.a
LIBFT = libft.a

all: $(NAME)

#MacOS
#%.o: %.c
#$(CC) $(UNUSED) -Imlx -c $< -o $@

#Linux
%.o: %.c
	$(CC) $(UNUSED) -c $< -o $@

#Linux
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -Lmlx_linux -Llibft -lft -lmlx -lXext -lX11 -lm -lz -o $(NAME)

#MacOS
#$(NAME): $(OBJ)
#$(CC) $(OBJ) -Llibft -lft -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

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

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f a.out

re: fclean all

test: clean all
	./$(NAME) minimalist.rt