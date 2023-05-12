SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f 
CFLAGS = -Wall -Wextra -Werror -std=c++98 
NAME = sed

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re