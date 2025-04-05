# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 13:10:05 by svereten          #+#    #+#              #
#    Updated: 2025/04/03 15:11:43 by svereten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = phonebook

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDE = -I./include

SRC_DIR = src
OBJ_DIR = obj

FILES = main \
		Contact \
		PhoneBook \

OBJS = ${FILES:%=${OBJ_DIR}/%.o}

OBJ_DIRS = ${sort ${dir ${OBJS}}}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${INCLUDE} $^ -o $@

${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp | ${OBJ_DIRS}
	${CXX} ${CXXFLAGS} ${INCLUDE} -c $< -o $@

${OBJ_DIRS}:
	mkdir -p $@

clean:
	rm -rf ${OBJ_DIR}

fclean: clean
	rm -rf ${NAME}

re: fclean all

run: re
	./${NAME} ${ARGS}

valgrind: re
	valgrind ./${NAME}

.PHONY: all clean fclean re
