NAME	= libftprintf.a

SRCS	= ft_printf.c srcs/ft_putchar.c

OBJS	= $(SRCS:.c=.o)

CC	= cc

CFLAGS	= -Wextra -Werror -Wall -I ./

AR	= ar

ARFLAGS	= rcs

RM = rm -f

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
