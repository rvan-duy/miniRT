# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <rvan-duy@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/25 22:42:14 by rvan-duy      #+#    #+#                  #
#    Updated: 2021/02/15 11:54:32 by rubenz        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= miniRT.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -I $(HEADER)
HEADER 	= include
MINIRT	= main.c

LIBFT	= ft_strlen.c

GNL	= get_next_line.c \
	  get_next_line_utils.c

SRC_DIRS = \
	$(addprefix src/, $(MAIN)) \
	$(addprefix libft/, $(LIBFT)) \
	$(addprefix get_next_line/, $(GNL)) \
	$(addprefix printf/, $(MINIRT))

OBJ_DIRS = \
	obj \
	obj/libft \
	obj/get_next_line \
	obj/miniRT

all: $(NAME)

SRC	= $(addprefix src/, $(SRC_DIRS))
OBJ = $(SRC:src/%.c=obj/%.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

obj/%.o: src/%.c
	@mkdir -p $(OBJ_DIRS)
	$(CC) $(FLAGS) -c $< -o $@

.PHONY:	clean fclean re

clean:
	@/bin/rm -f $(OBJ)
	@/bin/rm -f .DS_Store
	@/bin/rm -f a.out

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f *.a
	@/bin/rm -rf $(OBJ_DIRS)

re: fclean all
