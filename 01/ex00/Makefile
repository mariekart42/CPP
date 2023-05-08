NAME	= zombie
SRC		= main.cpp newZombie.cpp randomChump.cpp zombie.cpp
CC		= c++
RM		= rm
CFLAGS	= -I. -Wall -Werror -Wextra -std=c++98

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) -f $(NAME)

fclean:	clean

re:	fclean all

.PHONY:	all clean fclean re