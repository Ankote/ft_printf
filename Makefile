NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
ARC = ar rc
FILES = ft_pointer.c ft_putchar.c ft_putnbr.c ft_puthixa.c ft_putunsdic.c ft_putstr.c  \
		ft_printf.c
		

OBJCS = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
	$(ARC) $(NAME) $(OBJCS)
	
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJCS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean all fclean