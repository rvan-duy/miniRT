# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <rvan-duy@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/24 10:55:49 by rvan-duy      #+#    #+#                  #
#    Updated: 2021/03/17 22:17:19 by rvan-duy      ########   odam.nl          #
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
		print/mrt_rt_file_print.c \
		mrt_events.c
FLAGS = -Wall -Wextra -Werror
UNUSED  = -Wno-unused-variable -Wno-unused-parameter -Wno-unused-function
OBJ = $(SRCS:%.c=%.o)
MLX = libmlx.a
LIBFT = libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(UNUSED) -c $< -o $@

# Linux
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -Lmlx_linux -Llibft -lft -lmlx -lXext -lX11 -lm -lz -o $(NAME)

# MacOS
#$(NAME): $(OBJ)
#$(CC) $(FLAGS) $(OBJ) -Llibft -lft -lm -lz -framework OpenGL -framework AppKit -o $(NAME)

clean:
	@rm -f *.o
	@rm -f input_check/*.o
	@rm -f error_msg/*.o
	@rm -f struct_init/*.o
	@rm -f print/*.o
	@rm -f color/*.o

fclean: clean
	@rm -f $(NAME)
	@rm -f a.out

re: fclean all

test: clean all
	./$(NAME) minimalist.rt