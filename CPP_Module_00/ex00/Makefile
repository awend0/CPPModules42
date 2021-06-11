NAME	=	megaphone
SRCS	=	megaphone.cpp
FLAGS	=	-Wall -Wextra -Werror
OBJS	= 	$(SRCS:cpp=o)

all: $(NAME)

$(NAME): $(OBJS)
	g++ $(FLAGS) -o $(NAME) $(SRCS)

%.o: %.cpp
	g++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all