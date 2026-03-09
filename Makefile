# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/23 10:39:06 by htoe              #+#    #+#              #
#    Updated: 2026/03/10 01:00:47 by htoe             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Compilation
NAME = a.out
CC = cc
INCLUDE = include
CFLAGS = -Wall -Wextra -Werror -I${INCLUDE}

#Source files
SRCS = ${wildcard srcs/*.c}
OBJS = ${SRCS:srcs/%.c=objs/%.o}

#clean up
RM = rm -Rf

#Pattern Rules;
objs/%.o: srcs/%.c
	@mkdir -p ${dir ${OBJS}}
	@${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	@${CC} ${OBJS} -o ${NAME}
	@echo "COMPILATION SUCCESS"

all: ${NAME}

clean:
	@${RM} ${dir ${OBJS}}
	@echo "OBJS REMOVED"

fclean: clean
	@${RM} ${NAME}
	@echo "FOLDER CLEANUP"

re: fclean all
	@echo "RELINKING"

test: all
	@./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

.PHONY: all clean fclean re test
