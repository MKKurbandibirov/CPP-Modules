SRCS			= main.cpp Cat.cpp Dog.cpp Brain.cpp Animal.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -g -I.

NAME			= poly02

.PHONY:			all clean fclean re test

all:			$(NAME)

$(NAME):		$(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean:			clean
	@$(RM) $(NAME)

re:				fclean $(NAME)