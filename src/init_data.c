#include "../includes/push_swap.h"

t_data	*get_data(void)
{
	static t_data *data;
	data = NULL;

	if (data == NULL)
		data = ft_calloc(1, sizeof(t_data));
	return (data);
}

void parsing(int argc, char **argv, t_data *data)
{
	if (argc == 1)
        no_input_error();
	if (argc == 2)
	{
		quoted_args(argv, data);
	}
	else if (argc > 2)
	{
		no_quote_args(argc, argv, data);
	}
	smallest_largest(data);
	smallest_largest(data);
	init_small(data);
	index_tmp_stack(data);
	index_a(data);
}

void	init_data(int argc, char **argv, t_data *data)
{
	data->stack_a_count = 0;
	data->stack_b_count = 0;
	data->stack_a_smallest = INT_MAX;
	data->stack_a_largest = INT_MIN;
	data->stack_a = NULL;
	data->stack_b = NULL;
	data->tmp_stack = NULL;
	parsing(argc, argv, data);
}

int	smallest_largest(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->stack_a_count)
	{
		if (data->stack_a_smallest > data->stack_a[i])
			data->stack_a_smallest = data->stack_a[i];
		else if (data->stack_a_largest < data->stack_a[i])
			data->stack_a_largest = data->stack_a[i];
		i++;
	}
	return (0);
}

int init_small(t_data *data)
{
	data->stack_b = ft_calloc(data->stack_a_count, sizeof(int));
	if (!data->stack_b)
		return (1);
	data->stack_a_smallest = INT_MAX;
	smallest_largest(data);
	return(0);
}

void sort_index (t_data *data)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while(i < data->tmp_stack_count)
	{
		j = 0;
		while(j < data->tmp_stack_count)
		{
			if(data->tmp_stack[j] > data->tmp_stack[j + 1])
			{
				tmp = data->tmp_stack[j];
				data->tmp_stack[j] = data->tmp_stack[j + 1];
				data->tmp_stack[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < data->tmp_stack_count)
	{
		data->tmp_stack[i] = i;
		i++;
	}
}

void index_tmp_stack (t_data *data)
{
	int i;

	i = 0;
	// data->tmp_stack = malloc(data->stack_a_count * sizeof(int) - 1);
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

void index_a(t_data *data)
{
	int i;
	int j;

	i = 0;
	j = 0;
	data->stack_c = calloc(sizeof(char **), data->stack_a_count);

		while(i < data->stack_a_count)
		{
			if(data->stack_a[i] == check_for_small(data))
			{
				data->stack_a[i] = INT_MAX;
				data->stack_c[i] = j;
				j++;
				if (j == data->stack_a_count)
					break;
				i = -1;
			}
			i++;
		}
	
	free(data->stack_a);
	data->stack_a = calloc(sizeof(char **), data->stack_a_count);
	i = 0;
	while( i < data->stack_a_count)
	{
		data->stack_a[i] = data->stack_c[i];
		i++;
	}
}