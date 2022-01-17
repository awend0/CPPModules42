NAME	=	out
SRCS	=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp

FLAGS	=	-std=c++98 -Wall -Wextra -Werror -Wshadow -Wno-shadow
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