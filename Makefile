# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <rvan-duy@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/25 22:42:14 by rvan-duy      #+#    #+#                  #
#    Updated: 2021/02/16 14:37:24 by rvan-duy      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= miniRT
FILES 		= main.c \
				colors.c
SRC			= $(addprefix src/, $(FILES))
OBJ 		= $(SRC:src/%.c=obj/%.o)
OBJ_DIRS	= \
			obj \
			obj/libft
CC			= gcc
FLAGS		= -Wall -Wextra -Werror -I $(HEADER)
HEADER 		= include
LIBFT		= libft.a
LIBFT_DIR	= ./src/libft/
MLX			= libmlx.dylib
MLX_DIR		= ./src/mlx/
MLX_FLAGS	= -L. -Lmlx -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

libmlx.dylib:
	make -C	$(MLX_DIR)
	mv $(MLX_DIR)$(MLX) . 

libft.a:
	make bonus -C $(LIBFT_DIR)
	mv $(LIBFT_DIR)$(LIBFT) .

$(NAME): $(LIBFT) $(MLX) $(OBJ)
	$(CC) $(MLX_FLAGS) $(FLAGS) -o $(NAME) $(OBJ) $(LIBFT)

obj/%.o: src/%.c
	mkdir -p $(OBJ_DIRS)
	$(CC) -I $(HEADER) -Imlx -Ilibft -c $< -o $@

.PHONY:	clean fclean re

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f .DS_Store
	/bin/rm -f a.out

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f *.a
	/bin/rm -rf $(OBJ_DIRS)

re: fclean all
