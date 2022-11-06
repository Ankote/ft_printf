NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
ARC = ar -rc
FILES = ft_pointer.c ft_putchar.c ft_putnbr.c ft_puhixa.c ft_putunsdic.c ft_putstr.c

OBJCS = $(FILES:.o=.c)

all : $(NAME)

$(NAME) : $(OBJCS)
	$(ARC) $(NAME) $(OBGCS)
%.o:%.c
	$(CC) $(CFLAGS) $(NAME) -c $< -o $@

clean :
	rm -f $(OBGCS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean all fclean