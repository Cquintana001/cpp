NAME				=	phoneBook


							 
CC 					= 	c++

CFLAGS 				= 	-Wall -Werror -Wextra -std=c++98 -g3 # -fsanitize=address

SOURCES				=	main.cpp Contact.cpp PhoneBook.cpp

OBJS				= 	$(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS)  -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


fclean : clean
	rm -f $(NAME)
clean:
	rm -f $(OBJS)
re:	fclean all
.PHONY: all fclean clean re