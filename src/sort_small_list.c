/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:59:48 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 16:42:43 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	list_of_two(t_data *data)
{
	if (check_for_small(data) == data->stack_a[0])
	{
		free(data->stack_a);
		already_sorted();
	}
	sa(data, 1);
	free(data->stack_a);
	exit (0);
}

int	list_of_three(t_data *data)
{
	int	big;

	while (check_if_sorted(data) == 1)
	{
		big = check_for_big(data);
		if (data->stack_a[0] == big)
		{	
			ra(data, 1);
		}
		if (data->stack_a[1] == big)
		{	
			rra(data, 1);
		}
		if (data->stack_a[0] != check_for_small(data)
			&& data->stack_a[1] == check_for_small(data))
		{
			sa(data, 1);
		}
	}
	return (0);
}

int	list_of_five(t_data *data)
{
	while (data->stack_a_count > 3)
	{
		if (data->stack_a[0] == check_for_small(data))
			pb(data, 1);
		else if (data->stack_a[1] == check_for_small(data))
		{
			sa(data, 1);
			pb(data, 1);
		}
		else
			ra(data, 1);
	}
	list_of_three(data);
	pa(data, 1);
	if (data->stack_b_count != 0)
		pa(data, 1);
	return (0);
}

int	sort_small_list(t_data *data)
{
	if (data->stack_a_count == 2)
	{
		list_of_two(data);
		free(data->stack_a);
	}
	else if (data->stack_a_count == 3)
	{
		list_of_three(data);
		free(data->stack_a);
		exit (0);
	}	
	else if (data->stack_a_count <= 5)
	{
		list_of_five(data);
		free(data->stack_a);
		free(data->stack_b);
		exit (0);
	}
	return (0);
}
