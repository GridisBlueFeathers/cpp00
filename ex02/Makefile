# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 12:44:14 by svereten          #+#    #+#              #
#    Updated: 2025/04/22 13:03:30 by svereten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = banksters

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP

OBJ_DIR = obj
DEP_DIR = dep

FILES = Account \
		tests \

OBJS = ${FILES:%=${OBJ_DIR}/%.o}
DEPS = ${FILES:%=${DEP_DIR}/%.d}

OBJ_DIRS = ${sort ${dir ${OBJS}}}
DEP_DIRS = ${sort ${dir ${DEPS}}}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} $^ -o $@

${OBJ_DIR}/%.o: %.cpp | ${OBJ_DIRS}
	${CXX} ${CXXFLAGS} -c $< -o $@

${OBJ_DIRS}:
	mkdir -p $@

${DEP_DIRS}:
	mkdir -p $@

clean:
	rm -rf ${OBJ_DIR}
	rm -rf ${DEP_DIR}

fclean: clean
	rm -rf ${NAME}

re: fclean all

-include ${DEPS}

run: ${NAME}
	./${NAME}

valgrind: ${NAME}
	valgrind ./${NAME}

.PHONY: all clean fclean re run valgrind
