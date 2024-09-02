NAME		=	whatever

CC			=	c++ -std=c++98

CXXFLAGS	=	-Wall -Wextra -Werror -g

SRCS		=	main.cpp	\

OBJS		=	${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	@echo "Compiling..."
	@${CC} ${CXXFLAGS} -o $@ $^ 
	@echo "whatever compiled"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -rf ${OBJS}
	@echo "Objects removed"

fclean: clean
	@rm -rf ${NAME}
	@echo "whatever removed"

re: fclean all

.PHONY: all clean fclean re