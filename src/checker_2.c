/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:59:04 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 16:56:02 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	keep_check_no_quotes(t_data *data, int j, int *list)
{
	int	i;

	i = j + 1;
	while (i < data->stack_a_count)
	{
		if (list[j] == data->stack_a[i])
		{	
			data->stack_a_culprit = list[j];
			free(list);
			free_n_exit(data, list);
			dubs_error();
		}
		i++;
	}
}

int	dubs_no_quotes(t_data *data)
{
	int	j;
	int	*list;

	j = 0;
	list = ft_calloc(data->stack_a_count, sizeof(int));
	while (j < data->stack_a_count)
	{
		list[j] = data->stack_a[j];
		j++;
	}
	j = 0;
	while (j < data->stack_a_count)
	{
		keep_check_no_quotes(data, j, list);
		j++;
	}
	free(list);
	return (0);
}

int	check_minus_no_quotes(char **list, int i, int j, t_data *data)
{
	if (list[i][j] == '-' && j != 0)
	{
		data->err_no = 1;
		invalid_list_error();
		free(data->stack_a);
		exit (1);
	}
	return (0);
}

int	input_valid_num_no_quotes(t_data *data, char **argv, int i)
{
	int	j;

	j = 0;
	while (argv[i][j])
	{
		while (argv[i][j] == '\t' || argv[i][j] == '\n' || argv[i][j] == '\v'
			|| argv[i][j] == '\f' || argv[i][j] == '\r' || argv[i][j] == ' ')
			j++;
		if (argv[i][j] == '-')
		{
			check_minus_no_quotes(argv, i, j, data);
			j++;
		}
		if (argv[i][j] >= 48 && argv[i][j] <= 57)
			j++;
		else
		{
			data->err_no = 1;
			free(data->stack_a);
			invalid_list_error();
		}
	}
	return (0);
}

int	no_quote_args(int argc, char **argv, t_data *data)
{
	int	i;

	i = 1;
	data->stack_a = ft_calloc((argc - 1), sizeof(int *));
	if (!data->stack_a)
		return (1);
	data->stack_a_count = argc - 1;
	while (i < argc)
	{
		input_valid_num_no_quotes(data, argv, i);
		data->stack_a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	dubs_no_quotes(data);
	return (0);
}
