NAME = libftprintf.a
FILES = ft_printf.c	ft_adress.c	ft_low_hexadecimal.c	ft_print_percent.c	\
ft_print_signed_int.c	ft_print_unsigned_int.c	ft_putchar.c	\
ft_uper_hexadecimal.c	ft_putstr.c	handle_format.c

OBJS = $(FILES:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re