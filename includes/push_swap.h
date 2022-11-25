#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/headers/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_data
{
    int index;
    int *stack_a;
    int *stack_b;

}   t_data;

//Error handling
void    no_input_error(void);
void    dubs_error(void);
void    invalid_list_error(void);


t_data	*get_data(void);
void	init_data();
void    input_validation(char **argv);
void	quoted_args(char **argv);
void	no_quote_args(int argc, char **argv);


#endif  