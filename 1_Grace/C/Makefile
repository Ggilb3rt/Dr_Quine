NAME = Grace
CC = clang
CFLAGS = -Wall -Werror -Wextra
SRC = $(NAME).c
OBJ= $(SRC:%.c=%.o)

.PHONY: all clean fclean re

all: $(NAME)

%.o:%.c
	@printf "Création des objets en cours : $@ ...\n"
	@$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

# CLEANERS
clean:
	-rm $(OBJ)
	-rm Grace_kid.c
fclean: clean
	rm $(NAME)
re: fclean all

test: clean all
	./$(NAME)
	diff Grace.c Grace_kid.c