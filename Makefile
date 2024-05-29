# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/21 10:11:49 by dpaluszk          #+#    #+#              #
#    Updated: 2024/05/27 15:29:01 by dpaluszk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

all: ${NAME}

SRC = main.c

OBJECTS = ${SRC:.c=.o}

CC = cc

FLAGS = -Wall -Wextra -Werror

LIBFT = ./libft

%.o: %.c push_swap.h
	${CC} ${FLAGS} -c $< -o $@

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECTS) -L$(LIBFT) -lft

clean:
	rm -rf ${OBJECTS}

fclean:		clean
	rm -rf ${NAME}
	
re: fclean all

.PHONY: all clean fclean re