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

int input_valid_num (char **list, int i, t_data *data){
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
			// free(list[i]);
			// free(list);
            invalid_list_error();
			// free(data->stack_a);
			exit (2);
		}
		j++;
	}
	return (0);
}


int dubs (t_data *data)
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


void    keep_check_no_quotes(t_data *data, int j, int *list)
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
		while (argv[i][j] == '\t' || argv[i][j] == '\n' || argv[i][j] == '\v' || argv[i][j] == '\f' || argv[i][j] == '\r' || argv[i][j] == ' ')
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
