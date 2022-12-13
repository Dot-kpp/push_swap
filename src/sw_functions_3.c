/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sw_functions_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:17:48 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 16:36:51 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	continue_pb(t_data *data)
{
	int	i;

	i = 0;
	data->stack_a_tmp = data->stack_b[i];
	data->stack_b[i] = data->stack_a[i];
	i++;
	while (i <= data->stack_b_count)
	{
		data->stack_b_tmp = data->stack_b[i];
		data->stack_b[i] = data->stack_a_tmp;
		data->stack_a_tmp = data->stack_b_tmp;
		i++;
	}
	data->stack_b[i] = data->stack_a_tmp;
	i = 0;
	while (i < data->stack_a_count)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
}

int	pb(t_data *data, int i)
{
	data->stack_b_tmp = INT_MAX;
	if (data->stack_a_count == 0)
		return (0);
	continue_pb(data);
	data->stack_b_count++;
	data->stack_a_count--;
	data->stack_a_smallest = INT_MAX;
	data->stack_b_tmp = INT_MAX;
	smallest_largest(data);
	if (i == 1)
		printf("pb\n");
	return (0);
}

void	continue_pa(t_data *data)
{
	int	i;

	i = 0;
	data->stack_a_tmp = data->stack_a[i];
	data->stack_a[i] = data->stack_b[i];
	i++;
	while (i <= data->stack_a_count)
	{
		data->stack_b_tmp = data->stack_a[i];
		data->stack_a[i] = data->stack_a_tmp;
		data->stack_a_tmp = data->stack_b_tmp;
		i++;
	}
	i = 0;
	while (i <= data->stack_b_count)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
}

int	pa(t_data *data, int i)
{
	if (data->stack_b_count == 0)
		return (0);
	continue_pa(data);
	data->stack_a_count++;
	data->stack_b_count--;
	data->stack_a_smallest = INT_MAX;
	smallest_largest(data);
	if (i == 1)
		printf("pa\n");
	return (0);
}
