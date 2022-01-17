NAME	=	phonebook
SRCS	=	main.cpp \
			Contact.cpp \
			PhoneBook.cpp
FLAGS	=	-Wall -Wextra -Werror
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