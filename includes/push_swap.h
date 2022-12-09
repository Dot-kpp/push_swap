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
    int     stack_a_tmp;
    int     stack_a_smallest;
    int     stack_a_largest;
    int     stack_a_culprit;
    int     *stack_b;
    int     stack_b_count;
    int     stack_b_tmp;
    int     *tmp_stack;
    int     tmp_stack_count;
    char	*errorlog;
	int		err_no;

}   t_data;

//Error handling
void    no_input_error(void);
void    dubs_error(void);
void    invalid_list_error(void);
void already_sorted(void);

//init and parsing
t_data	*get_data(void);
void	init_data();
int	    smallest_largest();
void	quoted_args(char **argv, t_data *data);
int	    no_quote_args(int argc, char **argv, t_data *data);
int     init_small(t_data *data);

//
int sort_small_list(t_data *data);
int sort_big_list(t_data *data);
int check_for_big(t_data *data);
int check_for_small(t_data *data);
int check_for_mid(t_data *data);
int check_if_sorted(t_data *data);

void parsing(int argc, char **argv, t_data *data);
void index_tmp_stack (t_data *data);

//moves
int	sa(t_data *data, int i);
int	sb(t_data *data, int i);
int	ss(t_data *data, int i);
int	rra(t_data *data, int c);
int	ra(t_data *data, int c);
int	rb(t_data *data, int c);
int	rr(t_data *data, int c);
int	rrr(t_data *data, int c);
int	rrb(t_data *data, int c);
int pa(t_data *data, int i);
int pb(t_data *data, int i);

#endif  