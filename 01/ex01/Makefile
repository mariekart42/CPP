NAME = zombie
SRC = main.cpp Zombie.cpp zombieHorde.cpp
FLAGS = -I. -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean