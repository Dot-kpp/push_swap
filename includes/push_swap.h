#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

typedef struct s_stacks
{
    int index;
    int *stack_a;

    int *stack_b;

}   t_stacks;

typedef enum e_bool
{
    True,
    False,
}   t_bool;

int	    ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
void  input_validation(char **argv);


#endif  