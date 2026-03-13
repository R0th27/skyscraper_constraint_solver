# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/23 10:39:06 by htoe              #+#    #+#              #
#    Updated: 2026/03/13 17:44:47 by htoe             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL	:= all

#Compilation
NAME 		:= a.out
CC			:= cc
CFLAGS 		:= -Wall -Wextra -Werror
CINCLUDE	:= -Iinclude -Ilibft/include
LIBFLAGS	:= -Llibft -lft
RM			:= rm -Rf

#Directories
SRCSDIR 	:= srcs
OBJSDIR		:= objs
LIBFTDIR	:= libft

#Sources
SRCS 		:= ${wildcard ${SRCSDIR}/*.c}
OBJS 		:= ${SRCS:${SRCSDIR}/%.c=${OBJSDIR}/%.o}
LIBFT		:= ${LIBFTDIR}/libft.a

#Pattern Rules;
${OBJSDIR}/%.o: ${SRCSDIR}/%.c Makefile
	@mkdir -p ${dir $@}
	@${CC} ${CFLAGS} ${CINCLUDE} -c $< -o $@

${LIBFT}:
	@echo "COMPILING LIBFT"
	@make -s -C ${LIBFTDIR}

${NAME}: Makefile ${OBJS} ${LIBFT}
	@echo "LINKING SKYSCRAPPER"
	@${CC} ${OBJS} ${LIBFLAGS} -o ${NAME}
	@echo "COMPILATION SUCCESS"

all: ${NAME}

clean:
	@echo "CLEANING"
	@${RM} ${OBJSDIR}
	@make clean -s -C ${LIBFTDIR}

fclean: clean
	@${RM} ${NAME}
	@make fclean -s -C ${LIBFTDIR}

re: fclean all

test: all
	@./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

.PHONY: all clean fclean re test
