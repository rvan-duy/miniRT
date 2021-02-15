# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <rvan-duy@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/25 22:42:14 by rvan-duy      #+#    #+#                  #
#    Updated: 2021/02/15 15:11:50 by rvan-duy      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= miniRT
FILES 		= main.c
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

all: $(NAME)

libft.a:
	make bonus -C $(LIBFT_DIR)
	mv $(LIBFT_DIR)$(LIBFT) .

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(LIBFT)

obj/%.o: src/%.c
	mkdir -p $(OBJ_DIRS)
	$(CC) -I $(HEADER) $(FLAGS) -c $< -o $@

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
