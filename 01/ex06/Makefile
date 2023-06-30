NAME = harlFilter
SRC = main.cpp HarlFilter.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -I. -Wall -Werror -Wextra -std=c++98
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re