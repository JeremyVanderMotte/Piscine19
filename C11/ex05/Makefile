SRCS = ft_addition.c \
	   ft_check_operator.c \
	   ft_division.c \
	   ft_modulo.c \
	   ft_multiplication.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_strlen.c \
	   ft_substraction.c \
	   main.c \
	   ft_atoi.c \
	   ft_do_op.c \
	   ft_putnbr.c \
	   ft_calculate.c\

OBJS	= ${SRCS:.c=.o}

NAME	= do-op

FLAGS	= -Wall -Wextra -Werror

CC		= gcc

RM		= rm -f

.c.o:
	${CC} ${FLAGS} -c $^ -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
			${CC} ${FLAGS} $^ -o $@

clean:
	${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re


