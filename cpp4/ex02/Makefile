NAME		=	Animal

CC			=	c++ -std=c++98

CXXFLAGS	=	-Wall -Wextra -Werror -g #-fsanitize=address -fsanitize=undefined

SRCS		=	main.cpp		\
				AAnimal.cpp		\
				Dog.cpp			\
				Cat.cpp			\
				Brain.cpp

OBJS		=	${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	@echo "Compiling..."
	@${CC} ${CXXFLAGS} -o $@ $^ 
	@echo "Animal compiled"

%.o: %.cpp
	@$(CC) $(CXXFLAGS) -c -o $@ $<

clean:
	@rm -rf ${OBJS}
	@echo "Objects removed"

fclean: clean
	@rm -rf ${NAME}
	@echo "Animal removed"

re: fclean all

.PHONY: all clean fclean re