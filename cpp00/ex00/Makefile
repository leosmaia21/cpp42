NAME = megaphone

CXX = c++ 
CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Iincludes -std=c++98
OBJS_FOLDER = base
VPATH = srcs/
RM = rm -rf

SRCS =	megaphone.cpp
OBJS = ${SRCS:%.cpp=${OBJS_FOLDER}/%.o}

all : ${NAME}

${NAME}: ${OBJS_FOLDER} ${OBJS}
	${CXX} ${OBJS} -o ${NAME}

${OBJS_FOLDER}:
	mkdir -p base

${OBJS_FOLDER}/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

clean:
	${RM} ${OBJS_FOLDER}

fclean: clean
	${RM} ${NAME}


re: fclean all

# .PHONY: ${NAME} fclean clean all re

