NAME	= phoneBook
SRC		= main.cpp phoneBook.cpp utils.cpp contact.cpp
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