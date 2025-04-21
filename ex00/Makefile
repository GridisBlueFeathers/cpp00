# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 13:10:05 by svereten          #+#    #+#              #
#    Updated: 2025/04/21 13:17:03 by svereten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = megaphone

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

OBJ_DIR = obj

FILES = megaphone

OBJS = ${FILES:%=${OBJ_DIR}/%.o}

OBJ_DIRS = ${sort ${dir ${OBJS}}}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} $^ -o $@

${OBJ_DIR}/%.o: %.cpp | ${OBJ_DIRS}
	${CXX} ${CXXFLAGS} -c $< -o $@

${OBJ_DIRS}:
	mkdir -p $@

clean:
	rm -rf ${OBJ_DIR}

fclean: clean
	rm -rf ${NAME}

re: fclean all

run: ${NAME}
	./${NAME} ${ARGS}

.PHONY: all clean fclean re
