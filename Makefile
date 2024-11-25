SRCS =  ft_strlen.c ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_printf.c ft_puthex.c
OBJECTS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
HEADER = libftprintf.h
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJECTS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
.SECONDARY : $(OBJECTS)