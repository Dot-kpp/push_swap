# must include $(NAME), all, clean, fclean et re
NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = 	./src/checker.c ./src/conversions.c ./src/push_swap.c ./src/sw_functions.c ./src/init_data.c ./src/error.c ./src/sort_small_list.c

OBJ = $(SRCS:%c=%o)

LIBFT = ./libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT) :
	@echo "Your libft is compiling"
	@echo ""
	@$(MAKE) -C libft
	@echo ""

$(NAME): $(OBJ)
	@echo "Your shit is compiling"
	@echo ""
	@echo ""
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o push_swap
	@echo "Your shit is compiled"
	@echo ""


clean:
	@rm -rf $(NAME) *.out *.exe ./src/*.o ./push_swap
	@echo "(👍 ͡ ͜ʖ ͡)👍"

fclean: clean
	@rm -rf $(NAME) *.out *.exe ./src/*.o ./libft/*.a ./libft/src/*.o ./push_swap
	@echo ""
	@echo "Your shit is clean af!"
	@echo ""
	@echo "(👍 ͡ ͜ʖ ͡)👍"
	@echo ""

re:	fclean all