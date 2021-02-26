# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <rvan-duy@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/24 10:55:49 by rvan-duy      #+#    #+#                  #
#    Updated: 2021/02/26 15:26:55 by rvan-duy      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = miniRT
CC = gcc
SRCS = main.c \
		mrt_events.c
FLAGS = -Wall -Wextra -Werror
OBJ = main.o \
		mrt_events.o
MLX = libmlx.a
LIBFT = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx_linux -Llibft -lft -lmlx -lXext -lX11 -lm -lz -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all