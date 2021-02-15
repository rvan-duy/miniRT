# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <rvan-duy@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/27 19:13:56 by rvan-duy      #+#    #+#                  #
#    Updated: 2021/01/12 23:28:32 by rvan-duy      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =  libft.a

SRC =   ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
				ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
				ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
				ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c \
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
				ft_putnbr_fd.c ft_realloc.c ft_strndup.c ft_utoa.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
				ft_lstiter_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c

OBJ =   $(SRC:.c=.o)

BONUS_OBJ =     $(BONUS:.c=.o)

INCLUDES = libft.h

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES)
		ar rcs $(NAME) $?

%.o: %.c
		gcc -Wall -Wextra -Werror -c $<

bonus: $(NAME) $(BONUS_OBJ) $(INCLUDES)
		@touch bonus
		ar rcs $(NAME) $?

norm:
		norminette $(SRC) $(BONUS) $(INCLUDES)

clean:
		/bin/rm -f $(OBJ) $(BONUS_OBJ)
		/bin/rm -f *~

fclean: clean
		/bin/rm -f $(NAME)
		/bin/rm -f bonus

re: fclean all
