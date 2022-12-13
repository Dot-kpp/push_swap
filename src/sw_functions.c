/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sw_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:59:57 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 16:38:00 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rr(t_data *data, int c)
{
	if (data->stack_a_count < 2 || data->stack_b_count < 2)
		return (0);
	ra(data, 0);
	rb(data, 0);
	if (c == 1)
		printf("rr\n");
	return (0);
}

int	rra(t_data *data, int c)
{
	int	i;

	if (data->stack_a_count < 2)
		return (0);
	i = data->stack_a_count - 1;
	data->stack_a_tmp = data->stack_a[i];
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[i] = data->stack_a_tmp;
	if (c == 1)
		printf("rra\n");
	return (0);
}

int	rrr(t_data *data, int c)
{
	if (data->stack_a_count < 2 || data->stack_b_count < 2)
		return (0);
	rra(data, 1);
	rrb(data, 1);
	if (c == 1)
		printf("rrr\n");
	return (0);
}

int	rrb(t_data *data, int c)
{
	int	i;

	if (data->stack_b_count < 2)
		return (0);
	i = data->stack_b_count - 1;
	data->stack_b_tmp = data->stack_b[i];
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[i] = data->stack_b_tmp;
	if (c == 1)
		printf("rrb\n");
	return (0);
}
