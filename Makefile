# must include $(NAME), all, clean, fclean et re
NAME = push_swap.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = 	./src/*.c

BONUSSRCS = 

BONUSOBJ = $(BONUSSRCS:%c=%o)

OBJ = $(SRCS:%c=%o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUSOBJ)
	ar rcs $(NAME) $(OBJ) $(BONUSOBJ)

clean:
	rm -f $(OBJ) $(BONUSOBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all