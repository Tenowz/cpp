NAME		=	Serial

CC			=	c++ -std=c++98

CXXFLAGS	=	-Wall -Wextra -Werror -fpermissive -g #-fsanitize=address -fsanitize=undefined

SRCS		=	main.cpp			\
				Serialization.cpp

OBJS		=	${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	@echo "Compiling..."
	@${CC} ${CXXFLAGS} -o $@ $^ 
	@echo "Serial compiled"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -rf ${OBJS}
	@echo "Objects removed"

fclean: clean
	@rm -rf ${NAME}
	@echo "Serial removed"

re: fclean all

.PHONY: all clean fclean re