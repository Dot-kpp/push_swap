#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/headers/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

typedef struct s_data
{
    int index;
    int *stack_a;
    int *stack_b;

}   t_data;

typedef enum e_bool
{
    True,
    False,
}   t_bool;

void no_input_error(void);
t_data	*get_data(void);
void	init_data();
void  input_validation(char **argv);
void	check_quoted_args(char **argv);


#endif  