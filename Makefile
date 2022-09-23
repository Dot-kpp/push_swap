# must include $(NAME), all, clean, fclean et re
NAME = push_swap.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -o push_swap

SRCS = 	src/checker.c src/conversions.c src/push_swap.c src/sw_functions.c 
BONUSSRCS = 

BONUSOBJ = $(BONUSSRCS:%c=%o)

OBJ = $(SRCS:%c=%o)


all: $(NAME)

$(NAME): $(OBJ)
	@echo "Your shit is compiling"
	@echo ""
	@ar rcs $(NAME) $(OBJ)
	@echo ""
	@$(CC) $(CFLAGS) $(NAME)
	@echo "Your shit is compiled"
	@echo ""


bonus: $(OBJ) $(BONUSOBJ)
	@ar rcs $(NAME) $(OBJ) $(BONUSOBJ)
	@$(CC) $(CFLAGS) $(NAME)

clean:
	@rm -rf $(OBJ) $(BONUSOBJ)

fclean: clean
	@rm -rf $(NAME) *.out *.exe
	@echo ""
	@echo "Your shit is clean af!"
	@echo ""
	@echo "(👍 ͡❛ ͜ʖ ͡❛)👍"
	@echo ""

re:	fclean all