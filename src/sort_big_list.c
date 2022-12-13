/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:59:40 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 17:34:53 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	saviour_funtion_two(t_data *data, int i, int j)
{
	while (data->stack_b[i] != data->tmp_stack[data->tmp_stack_count - j])
			i++;
	if (i <= check_for_mid_b(data))
		while (data->stack_b[0]
			!= data->tmp_stack[data->tmp_stack_count - j])
			rb(data, 1);
	else if (i > check_for_mid_b(data))
		while (data->stack_b[0]
			!= data->tmp_stack[data->tmp_stack_count - j])
			rrb(data, 1);
}

int	savior_function(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < data->tmp_stack_count)
	{
		if (data->stack_b_count == 2)
		{
			if (data->stack_b[0] < data->stack_b[1])
				sb(data, 1);
			pa(data, 1);
			pa(data, 1);
			return (0);
		}
		saviour_funtion_two(data, i, j);
		pa(data, 1);
		i = 0;
		j++;
	}
	return (0);
}

int	savior_function_ten(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j <= data->tmp_stack_count)
	{
		while (data->stack_b[i]
			!= data->tmp_stack[data->tmp_stack_count - j])
			i++;
		if (i <= check_for_mid_b(data))
			while (data->stack_b[0]
				!= data->tmp_stack[data->tmp_stack_count - j])
				rb(data, 1);
		else if (i > check_for_mid_b(data))
			while (data->stack_b[0]
				!= data->tmp_stack[data->tmp_stack_count - j])
				rrb(data, 1);
		pa(data, 1);
		i = 0;
		j++;
	}
	return (0);
}

void	sort_direction(t_data *data, int v, int w)
{
	int	j;

	j = 0;
	while (j <= data->stack_a_count)
	{
		if (data->stack_b[0] > check_for_mid_b(data))
			rb(data, 1);
		else if (data->stack_b[data->stack_b_count - 1]
			<= check_for_mid_b(data))
			rrb(data, 1);
		if (data->stack_b[1] < data->stack_b[0])
		{
			if (data->stack_a[1] < data->stack_a[0])
				sa(data, 1);
			sb(data, 1);
		}
		if (data->stack_a[0] >= w && data->stack_a[0] < v)
			pb(data, 1);
		else
			ra(data, 1);
		j++;
	}
}

int	sort_big_list(t_data *data)
{
	int	v;
	int	w;

	v = 0;
	w = 0;
	v = check_for_mid_a(data);
	w = check_for_mid_a(data);
	define_chunk_size(data);
	while (data->stack_a_count > 0)
	{
		v = v + data->chunk_size;
		w = w - data->chunk_size;
		sort_direction(data, v, w);
	}
	if (data->tmp_stack_count >= 20)
		savior_function(data);
	else
		savior_function_ten(data);
	return (0);
}
