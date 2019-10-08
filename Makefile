# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edouvier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 12:34:35 by edouvier          #+#    #+#              #
#    Updated: 2019/10/08 15:31:05 by edouvier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a

CC = gcc 

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memccpy.c \
       ft_memmove.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strlen.c \
       ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_atoi.c \
       ft_strlcat.c \
       ft_strlcpy.c \
       ft_strnstr.c \
       ft_strdup.c

OBJ   = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
HEAD  = includes

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRCS) -I $(HEAD)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
