# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cda-silv <cda-silv@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/01 16:28:31 by cda-silv          #+#    #+#              #
#    Updated: 2025/02/12 20:25:31 by cda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client
CC = cc
CFLAGS = -Wall -Wextra -Werror
PRINTF_DIR = Printf
SRCS_SERVER = server.c
SRCS_CLIENT = client.c
PRINTF = $(PRINTF_DIR)/libftprintf.a

all: $(PRINTF) $(SERVER) $(CLIENT)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(SERVER): $(OBJS_SERVER) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) server.c -L$(PRINTF_DIR) -lftprintf -o $(SERVER) 

$(CLIENT): $(OBJS_CLIENT) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) client.c -L$(PRINTF_DIR) -lftprintf -o $(CLIENT)

clean:
	rm -f $(OBJS_SERVER) $(OBJS_CLIENT)
	make clean -C $(PRINTF_DIR)

fclean: clean
	rm -f $(SERVER) $(CLIENT)
	make fclean -C $(PRINTF_DIR)

re: fclean all

.PHONY: all clean fclean re
