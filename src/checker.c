/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:58:28 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 16:59:56 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	keep_check(t_data *data, int j, int *list)
{
	int	i;

	i = j + 1;
	while (i < data->stack_a_count)
	{
		if (list[j] == data->stack_a[i])
		{	
			data->stack_a_culprit = list[j];
			free(list);
			dubs_error();
			free_n_exit(data, list);
			exit (1);
		}
		i++;
	}
}

int	check_minus(char **list, int i, int j, t_data *data)
{
	if (list[i][j] == '-' && j != 0)
	{
		data->err_no = 1;
		free(list[i]);
		free(list);
		invalid_list_error();
		free(data->stack_a);
		exit (1);
	}
	return (0);
}

int	input_valid_num(char **list, int i, t_data *data)
{
	int	j;

	j = 0;
	while (list[i][j])
	{
		if (list[i][j] == '-')
		{
			check_minus(list, i, j, data);
			j++;
		}
		if ((list[i][j] < 48) || (list[i][j] > 57))
		{
			data->err_no = 1;
			free(list[i]);
			free(list);
			invalid_list_error();
			free(data->stack_a);
			exit (2);
		}
		j++;
	}
	return (0);
}

int	dubs(t_data *data)
{
	int	j;
	int	*list;

	j = 0;
	list = malloc(data->stack_a_count * sizeof(int));
	while (j < data->stack_a_count)
	{
		list[j] = data->stack_a[j];
		j++;
	}
	j = 0;
	while (j < data->stack_a_count)
	{
		keep_check(data, j, list);
		j++;
	}
	free(list);
	return (0);
}

void	quoted_args(char **argv, t_data *data)
{
	char	**list;
	int		listlen;
	int		i;

	listlen = 0;
	i = 0;
	list = ft_split(argv[1], ' ');
	while (list[listlen])
		listlen++;
	data->stack_a = ft_calloc(listlen, sizeof(int));
	while (list[i])
	{
		input_valid_num(list, i, data);
		data->stack_a[i] = ft_atoi(list[i]);
		data->stack_a_count++;
		i++;
	}
	dubs(data);
	free_list(i, list);
}
