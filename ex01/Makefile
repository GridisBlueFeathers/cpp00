# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 13:10:05 by svereten          #+#    #+#              #
#    Updated: 2025/04/21 19:24:32 by svereten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = phonebook

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP

INCLUDE = -I./include

SRC_DIR = src
OBJ_DIR = obj
DEP_DIR = dep

FILES = main \
		Contact \
		PhoneBook \

OBJS = ${FILES:%=${OBJ_DIR}/%.o}
DEPS = ${FILES:%=${OBJ_DIR}/%.d}

OBJ_DIRS = ${sort ${dir ${OBJS}}}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${INCLUDE} $^ -o $@

${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp | ${OBJ_DIRS}
	${CXX} ${CXXFLAGS} ${INCLUDE} -c $< -o $@

${OBJ_DIRS}:
	mkdir -p $@

${DEP_DIRS}:
	mkdir -p $@

clean:
	rm -rf ${OBJ_DIR}

fclean: clean
	rm -rf ${NAME}

re: fclean all

-include ${DEPS}

run: ${NAME}
	./${NAME}

valgrind: ${NAME}
	valgrind ./${NAME}

.PHONY: all clean fclean re run valgrind
