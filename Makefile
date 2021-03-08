# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <rvan-duy@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/24 10:55:49 by rvan-duy      #+#    #+#                  #
#    Updated: 2021/03/08 22:00:28 by rvan-duy      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = miniRT
CC = gcc
SRCS = main.c \
		mrt_events.c \
		input_check/mrt_input_check.c \
		input_check/mrt_argv_check.c \
		input_check/mrt_rt_file_read.c \
		input_check/mrt_parse_utils_1.c \
		input_check/mrt_parse_utils_2.c \
		input_check/mrt_resolution_parse.c \
		input_check/mrt_ambient_parse.c \
		input_check/mrt_camera_parse.c \
		error_msg/mrt_error_msg.c \
		struct_init/mrt_vars_init.c
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRCS:%.c=%.o)
MLX = libmlx.a
LIBFT = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx_linux -Llibft -lft -lmlx -lXext -lX11 -lm -lz -o $(NAME)

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