NAME	= megaphone
SRC		= megaphone.cpp
OBJ		= $(SRCS:.cpp=.o)
CXX		= c++
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra -std=c++98

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re