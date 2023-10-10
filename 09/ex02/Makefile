NAME = PmergeMe
SRC = main.cpp PmergeMe.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf
CXX = c++
CXXFLAGS = -I. -Wall -Wextra -Werror -std=c++98 -pedantic -g

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re