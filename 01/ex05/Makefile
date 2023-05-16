NAME = harl
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -I. -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(SRC)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re