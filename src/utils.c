/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:01:44 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 16:35:39 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_for_big(t_data *data)
{
	int	largest;
	int	i;

	largest = INT_MIN;
	i = 0;
	while (i < data->stack_a_count)
	{
		if (largest < data->stack_a[i])
		{
			largest = data->stack_a[i];
			i++;
		}
		else
			i++;
	}
	return (largest);
}

int	check_for_small(t_data *data)
{
	int	smallest;
	int	i;

	smallest = INT_MAX;
	i = 0;
	while (i < data->stack_a_count)
	{
		if (smallest > data->stack_a[i])
		{
			smallest = data->stack_a[i];
			i++;
		}
		else
			i++;
	}
	return (smallest);
}

int	check_for_mid(t_data *data)
{
	int	mid;
	int	i;

	if (data->tmp_stack_count % 2 == 0)
		i = data->tmp_stack_count / 2 - 1;
	else
		i = data->tmp_stack_count / 2;
	mid = data->tmp_stack[i];
	return (mid);
}

int	check_for_mid_b(t_data *data)
{
	int	b_mid;
	int	i;

	if (data->stack_b_count % 2 == 0)
		i = data->stack_b_count / 2 - 1;
	else
		i = data->stack_b_count / 2;
	b_mid = data->stack_b[i];
	return (b_mid);
}

int	check_for_mid_a(t_data *data)
{
	int	a_mid;
	int	i;

	if (data->stack_a_count % 2 == 0)
		i = data->stack_a_count / 2 - 1;
	else
		i = data->stack_a_count / 2;
	a_mid = data->stack_a[i];
	return (a_mid);
}
