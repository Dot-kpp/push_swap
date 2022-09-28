# must include $(NAME), all, clean, fclean et re
NAME = push_swap.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -o push_swap

SRCS = 	src/checker.c src/conversions.c src/push_swap.c src/sw_functions.c 

OBJ = $(SRCS:%c=%o)

LIBFT = ./libft/libft.a


all: $(NAME)

$(NAME): $(OBJ)
	@echo "Your shit is compiling"
	@echo ""
	@ar rcs $(NAME) $(OBJ)
	@echo ""
	@$(CC) $(CFLAGS) $(NAME) $(LIBFT)
	@mkdir -p objs && mv ./src/*.o ./objs/
	@mkdir -p bin && mv push_swap.a ./bin
	@echo "Your shit is compiled"
	@echo ""


clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) *.out *.exe ./objs ./bin
	@echo ""
	@echo "Your shit is clean af!"
	@echo ""
	@echo "(👍 ͡❛ ͜ʖ ͡❛)👍"
	@echo ""

re:	fclean all