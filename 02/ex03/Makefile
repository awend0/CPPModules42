NAME	=	out
SRCS	=	main.cpp \
			Fixed.cpp \
			Point.cpp
FLAGS	=	--std=c++98 -Wall -Wextra -Werror
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