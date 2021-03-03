# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <rvan-duy@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/24 10:55:49 by rvan-duy      #+#    #+#                  #
#    Updated: 2021/03/03 15:29:23 by rvan-duy      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = miniRT
CC = gcc
SRCS = main.c \
		mrt_events.c \
		input_check/mrt_input_check.c \
		input_check/mrt_argv_check.c \
		error_msg/mrt_error_msg.c
FLAGS = -Wall -Wextra -Werror
OBJ = main.o \
		mrt_events.o \
		input_check/mrt_input_check.o \
		input_check/mrt_argv_check.o \
		error_msg/mrt_error_msg.o
MLX = libmlx.a
LIBFT = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx_linux -Llibft -lft -lmlx -lXext -lX11 -lm -lz -o $(NAME)

clean:
	rm -f *.o
	rm -f input_check/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

test: clean all
	./$(NAME) minimalist.rt