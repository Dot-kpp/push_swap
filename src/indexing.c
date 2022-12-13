/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:06:12 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 17:26:07 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	index_tmp_to_num(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->tmp_stack_count)
	{
		data->tmp_stack[i] = i;
		i++;
	}
}

void	index_a_to_num(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->stack_a_count)
	{
		data->stack_a[i] = data->stack_c[i];
		i++;
	}
}

void	sort_index(t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < data->tmp_stack_count)
	{
		j = 0;
		while (j < data->tmp_stack_count)
		{
			if (data->tmp_stack[j] > data->tmp_stack[j + 1])
			{
				tmp = data->tmp_stack[j];
				data->tmp_stack[j] = data->tmp_stack[j + 1];
				data->tmp_stack[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	index_tmp_to_num(data);
}

void	index_tmp_stack(t_data *data)
{
	int	i;

	i = 0;
	data->tmp_stack = ft_calloc(data->stack_a_count, sizeof(int));
	if (!data->tmp_stack)
		exit (1);
	data->tmp_stack_count = 0;
	while (i < data->stack_a_count)
	{
			data->tmp_stack[i] = data->stack_a[i];
			data->tmp_stack_count++;
			i++;
	}
	sort_index(data);
}

void	index_a(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	data->stack_c = calloc(sizeof(char **), data->stack_a_count);
	while (i < data->stack_a_count)
	{
		if (data->stack_a[i] == check_for_small(data))
		{
			data->stack_a[i] = INT_MAX;
			data->stack_c[i] = j;
			j++;
			if (j == data->stack_a_count)
				break ;
			i = -1;
		}
		i++;
	}
	free(data->stack_a);
	data->stack_a = calloc(sizeof(char **), data->stack_a_count);
	index_a_to_num(data);
}
