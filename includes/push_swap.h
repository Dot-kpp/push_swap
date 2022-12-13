/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:58:52 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 15:58:52 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    int     chunk_size;
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
    int     *stack_c;
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
void    keep_check_no_quotes(t_data *data, int j, int *list);
int	check_minus_no_quotes(char **list, int i, int j, t_data *data);
int	input_valid_num_no_quotes(t_data *data, char **argv, int i);
int	dubs_no_quotes(t_data *data);
int     init_small(t_data *data);

//utils
int sort_small_list(t_data *data);
int sort_big_list(t_data *data);
int check_for_big(t_data *data);
int check_for_small(t_data *data);
int check_for_mid(t_data *data);
int check_if_sorted(t_data *data);
int get_mid_size(t_data *data);
int check_for_mid_a(t_data *data);
int check_for_mid_b(t_data *data);
void	define_chunk_size(t_data *data);

void parsing(int argc, char **argv, t_data *data);

//indexing
void index_tmp_stack (t_data *data);
void index_a(t_data *data);
void sort_index (t_data *data);

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

//free
int	free_list(int i, char **list);
int	free_n_exit(t_data *data, int *list);

#endif  