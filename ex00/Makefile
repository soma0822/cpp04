NAME = a.out

SRCS = main.cpp \
		Dog.cpp \
		Cat.cpp \
		Animal.cpp

OBJS_DIR = objs/

OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

ifeq ($(MAKECMDGOALS), debug)
CXXFLAGS += -fsanitize=address -fno-omit-frame-pointer -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o: %.cpp
	mkdir -p $(OBJS_DIR)
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

debug: re 