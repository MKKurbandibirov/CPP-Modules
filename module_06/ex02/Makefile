SRCS			= main.cpp Base.cpp A.cpp B.cpp C.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -g -I.

NAME			= identify

.PHONY:			all clean fclean re test

all:			$(NAME)

$(NAME):		$(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean:			clean
	@$(RM) $(NAME)

re:				fclean $(NAME)