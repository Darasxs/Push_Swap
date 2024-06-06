# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/21 10:11:49 by dpaluszk          #+#    #+#              #
#    Updated: 2024/06/03 11:24:26 by dpaluszk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = main.c
OBJECTS = ${SRC:.c=.o}
CC = cc
FLAGS = -Wall -Wextra -Werror

all: ${NAME}

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECTS) Libft/libft.a

%.o: %.c push_swap.h
	${CC} ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJECTS}

fclean:		clean
	rm -rf ${NAME}
	
re: fclean all

.PHONY: all clean fclean re