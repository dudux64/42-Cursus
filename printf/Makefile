NAME = libftprintf.a

SOURCE = ft_putchar.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_putunsnbr.c
         
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