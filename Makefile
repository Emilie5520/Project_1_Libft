# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edouvier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 12:34:35 by edouvier          #+#    #+#              #
#    Updated: 2019/10/18 14:12:31 by edouvier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re bonus

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
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_calloc.c \

BONUS = ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c

OBJ   = $(SRCS:.c=.o)
OBJ_BONUS = $(BONUS:.c=.o)
FLAGS = -Wall -Wextra -Werror
HEAD  = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: .bonus

.bonus: $(OBJ_BONUS) $(OBJ)
	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME)
	@touch .bonus

%.o : %.c $(HEAD) Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)
	@rm -f .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all
