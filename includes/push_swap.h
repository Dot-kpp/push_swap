#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/headers/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_data
{
    int     index;
    int     *stack_a;
    int     stack_a_count;
    int     stack_a_smallest;
    int     stack_a_largest;
    int     stack_a_culprit;
    int     *stack_b;
    char	*errorlog;
	int		err_no;

}   t_data;

//Error handling
void    no_input_error(void);
void    dubs_error(void);
void    invalid_list_error(void);

//init and parsing
t_data	*get_data(void);
void	init_data();
int	smallest_largest();
void	quoted_args(char **argv);
int	    no_quote_args(int argc, char **argv);

//
int sort_small_list(void);

#endif  