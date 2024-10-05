# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 14:32:35 by cda-silv          #+#    #+#              #
#    Updated: 2024/10/05 15:26:49 by cda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = ft_atoi.c \

OBJS = $(SOURCE:.c=.o)
CC = cc -Wall -Wextra -Werror

all: $(NAME)

$(NAME):$(OBJS)
	ar rc $@ $(OBJS)

%.o: %.c
	$(CC) -c $< -o $@

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

run: re
	$(CC) main.c -L. -l:libft.a -lbsd
	./a.out

norm:
	norminette -R CheckForbiddenSourceHearder $(SOURCE)


