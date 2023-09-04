NAME = convert
SRC = main.cpp ScalarConverter.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf
CXX = c++
CXXFLAGS = -I. -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re