# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvander- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 10:11:53 by jvander-          #+#    #+#              #
#    Updated: 2021/03/23 10:16:43 by jvander-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS	= ft_display_file.c

NAME	= ft_display_file

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS)

all:		$(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

.PHONY:		all clean fclean
