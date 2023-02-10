NAME = Sully
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
fclean: clean
	-rm $(NAME)
	-rm $(NAME)_*
re: fclean all

test: clean all
	./$(NAME)
	ls -al | grep Sully | wc -l
	diff Sully.c Sully_0.c
