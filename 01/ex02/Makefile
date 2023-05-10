NAME = brain
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CXXFLAGS = -I. -Werror -Wextra -Wall -std=c++98
CXX = c++
RM = rm -f

all:	$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
