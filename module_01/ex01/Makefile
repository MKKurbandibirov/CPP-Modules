SRCS			= main.cpp Zombie.cpp zombieHorde.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -g -I.

NAME			= ZombieHorde

.PHONY:			all clean fclean re test

all:			$(NAME)

$(NAME):		$(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean:			clean
	@$(RM) $(NAME)

re:				fclean $(NAME)