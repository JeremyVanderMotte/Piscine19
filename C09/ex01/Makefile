SRCS		= 	ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c 
HEADERS	= 	includes/ft.h
OBJ			= $(addprefix srcs/, $(SRCS:.c=.o))
CC= gcc
CFLAGS= -Wall -Wextra -Werror -Iincludes
NAME= libft.a

all: $(NAME)

$(NAME): $(HEADERS) $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
