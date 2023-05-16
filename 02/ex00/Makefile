NAME = fixed
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -I. -Werror -Wall -Wextra -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re