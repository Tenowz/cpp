NAME		=	FragTrap

CC			=	c++ -std=c++98

CXXFLAGS	=	-Wall -Wextra -Werror -g #-fsanitize=address -fsanitize=undefined

SRCS		=	main.cpp		\
				FragTrap.cpp	\
				ClapTrap.cpp	\
				ScavTrap.cpp

OBJS		=	${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	@echo "Compiling..."
	@${CC} ${CXXFLAGS} -o $@ $^ 
	@echo "FragTrap compiled"

%.o: %.cpp
	@$(CC) $(CXXFLAGS) -c -o $@ $<

clean:
	@rm -rf ${OBJS}
	@echo "Objects removed"

fclean: clean
	@rm -rf ${NAME}
	@echo "FragTrap removed"

re: fclean all

.PHONY: all clean fclean re