NAME = Colleen
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
	-rm -f $(OBJ)
	-rm -f tmp.log
fclean: clean
	-rm -f $(NAME)
re: fclean all

test: all
	./$(NAME) > tmp.log
	diff tmp.log $(NAME).c