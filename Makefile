CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = main.c\

OBJ = $(SRC:.c=.o)

NAME = *.c

all: $(NAME)
	echo "All good"
#	$(CC) $(CFLAGS) $^ -o $@ >/dev/null
$(NAME): $(OBJ)
	echo "Compiling $(NAME)"
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
	
.SILENT: