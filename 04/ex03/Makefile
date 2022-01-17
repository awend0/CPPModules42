NAME	=	out
SRCS	=	main.cpp \
			AMateria.cpp \
			Ice.cpp \
			Cure.cpp \
			Character.cpp \
			MateriaSource.cpp

FLAGS	=	-std=c++98 -pedantic -Wall -Wextra -Werror
OBJS	= 	$(SRCS:cpp=o)

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS) -o $(NAME) $(SRCS)

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all