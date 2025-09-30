NAME	= libftprintf.a

SRCS	= ft_printf.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c \
		srcs/ft_putptr.c srcs/ft_puthexa.c srcs/ft_putnbr.c

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

test: re
	cc test/main.c $(NAME) -o test_exec
	./test_exec

.PHONY: all clean fclean re
