/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   live_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:58:39 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 16:49:55 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	free_list(int i, char **list)
{
	i--;
	while (i >= 0)
	{
		if (list[i] == NULL)
			break ;
		free(list[i]);
		i--;
	}
	free(list);
	return (0);
}

int	free_n_exit(t_data *data, int *list)
{
	list = 0;
	free(list);
	free(data->stack_a);
	return (1);
}
