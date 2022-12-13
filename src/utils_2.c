/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:21:33 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 17:36:47 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_mid_size(t_data *data)
{
	int	i;

	if (data->tmp_stack_count % 2 == 0)
		i = data->tmp_stack_count / 2 - 1;
	else
		i = data->tmp_stack_count / 2;
	return (i);
}

int	check_if_sorted(t_data *data)
{
	int	i;

	i = 1;
	while (i < data->stack_a_count - 1)
	{
		if ((data->stack_a[i] < data->stack_a[i + 1])
			&& (data->stack_a[i] > data->stack_a[i - 1]))
			i++;
		else
			return (1);
	}
	return (0);
}

void	define_chunk_size(t_data *data)
{
	if (data->stack_a_count <= 10)
		data->chunk_size = 2;
	else if (data->stack_a_count <= 20)
		data->chunk_size = 5;
	else if (data->stack_a_count <= 100)
		data->chunk_size = 11;
	else
		data->chunk_size = 29;
}
