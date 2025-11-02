CC = c++
FLAGS = -Werror -Wextra -Wall -std=c++98
NAME = ex03

SRC = AMateria.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	main.cpp \
	MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

all = $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

valgrind: $(NAME)
	valgrind --leak-check=full ./$(NAME)

.PHONY: all clean fclean re valgrind