
NAME = webclient
FILES = *.cpp
HEADERS = .
SRCS = ${FILES}
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -MP -MMD -pedantic
OBJS = ${SRCS:.cpp=.o}
DFILE = *.d

.cpp.o:
	${CXX} ${CXXFLAGS} -I${HEADERS} -c $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS} ${DFILE}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
