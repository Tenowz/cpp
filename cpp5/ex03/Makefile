NAME		=	Form

CC			=	g++ -std=c++98

CXXFLAGS	=	-Wall -Wextra -Werror -g #-fsanitize=address -fsanitize=undefined

SRCS		=	main.cpp					\
				AForm.cpp					\
				Intern.cpp					\
				Bureaucrat.cpp				\
				RobotomyRequestForm.cpp		\
				ShrubberyCreationForm.cpp	\
				PresidentialPardonForm.cpp	\

OBJS		=	${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	@echo "Compiling..."
	@${CC} ${CXXFLAGS} -o $@ $^ 
	@echo "Form compiled"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -rf ${OBJS}
	@echo "Objects removed"

fclean: clean
	@rm -rf ${NAME}
	@echo "Form removed"

re: fclean all

.PHONY: all clean fclean re