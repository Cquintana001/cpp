
NAME = animal

SRC = 	Animal.cpp		\
		Dog.cpp			\
		Cat.cpp			\
		WrongCat.cpp	\
		WrongAnimal.cpp\
		Brain.cpp\
		main.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
		c++ $(CFLAGS) -o $(NAME) $(OBJ)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re