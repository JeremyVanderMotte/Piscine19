# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvander- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/20 10:36:24 by jvander-          #+#    #+#              #
#    Updated: 2021/03/21 18:32:59 by jvander-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c \
		  ft_nbr_tostr.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  main.c \
		  ft_check_param.c \
		  ft_check_nbr_dict.c \
		  ft_is_nbr.c \
		  ft_strcmp.c \
		  ft_strlen.c \
		  ft_check_error.c \
		  ft_cutn.c \
		  ft_get_thousand.c \
		  ft_put_word.c \
		  ft_strncpy.c \

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

FLAGS	= -Wall -Wextra -Werror

CC		= gcc

RM		= rm -f

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${FLAGS} $^ -o $@

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
