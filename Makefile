# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <rvan-duy@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/24 10:55:49 by rvan-duy      #+#    #+#                  #
#    Updated: 2021/03/09 15:55:06 by rvan-duy      ########   odam.nl          #
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
		input_check/mrt_resolution_parse.c \
		input_check/mrt_ambient_parse.c \
		input_check/mrt_camera_parse.c \
		input_check/mrt_light_parse.c \
		input_check/mrt_sphere_parse.c \
		error_msg/mrt_error_msg.c \
		struct_init/mrt_vars_init.c
FLAGS = -Wall -Wextra -Werror $(UNUSED)
UNUSED  = -Wno-unused-variable -Wno-unused-parameter -Wno-unused-function
OBJ = $(SRCS:%.c=%.o)
MLX = libmlx.a
LIBFT = libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -Llibft -lft -lm -lz -framework OpenGL -framework AppKit -o $(NAME)

clean:
	rm -f *.o
	rm -f input_check/*.o
	rm -f error_msg/*.o
	rm -f struct_init/*.o

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all

test: clean all
	./$(NAME) minimalist.rt