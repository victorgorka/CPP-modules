NAME = animal
CFLAG = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRC =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

OBJS = ${SRC:.cpp=.o}

all:	$(NAME)

%.o:	%.cpp
		c++ $(CFLAG) -c $<

$(NAME): $(OBJS)
	c++ $(CFLAG) $(OBJS) -o $(NAME)

re: fclean all

clean:
	@echo "CLEAN\n"
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean