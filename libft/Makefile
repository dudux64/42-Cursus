# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 14:32:35 by cda-silv          #+#    #+#              #
#    Updated: 2024/10/17 21:21:15 by cda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ft_isalpha.c \
          ft_isdigit.c \
          ft_isalnum.c \
          ft_isascii.c \
          ft_isprint.c \
          ft_strlen.c \
          ft_memset.c \
          ft_bzero.c \
          ft_memcpy.c \
          ft_memmove.c \
          ft_strlcpy.c \
          ft_strlcat.c \
          ft_toupper.c \
          ft_tolower.c \
          ft_strchr.c \
          ft_strrchr.c \
          ft_strncmp.c \
          ft_memchr.c \
          ft_memcmp.c \
          ft_strnstr.c \
          ft_atoi.c \
          ft_calloc.c \
          ft_strdup.c \
          ft_substr.c \
          ft_striteri.c

CC = cc -Wall -Wextra -Werror

OBJS = $(SOURCE:.c=.o)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)

%.o: %.c
	$(CC) -c $< -o $@

all: $(NAME)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run: re
	$(CC) main.c -L. -lft -lbsd
	./a.out

norm:
	norminette -R CheckForbiddenSourceHeader $(SOURCE)


