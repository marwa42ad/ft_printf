NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar_pf.c ft_puthex_pf.c ft_putnbr_pf.c ft_putptr_pf.c ft_putstr_pf.c ft_putunbr_pf.c
OBJS			= $(SRCS:.c=.o)
CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY	:	all clean fclean re