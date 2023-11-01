NAME = Fixed

CC = c++
CFLAGS = -Wall -Wextra -Werror -glldb -Iincludes -std=c++98
OBJS_FOLDER = base
VPATH = srcs/
RM = rm -rf

OBJS = ${SRCS:%.cpp=${OBJS_FOLDER}/%.o}
SRCS =	main.cpp Fixed.cpp Point.cpp

${NAME}: ${OBJS_FOLDER} ${OBJS}
	${CC} ${OBJS} -o ${NAME}

${OBJS_FOLDER}:
	mkdir -p base

${OBJS_FOLDER}/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	${RM} ${OBJS_FOLDER}

fclean: clean
	${RM} ${NAME}

all : ${NAME}

re: fclean all
