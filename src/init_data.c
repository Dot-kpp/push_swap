#include "../includes/push_swap.h"

t_data	*get_data(void)
{
	static t_data *data;
	data = NULL;

	if (data == NULL)
		data = ft_calloc(1, sizeof(t_data));
	return (data);
}

void	init_data(int argc, char **argv)
{
	t_data	*data;
	data = get_data();

	data->stack_a_count = 0;
	data->stack_a_smallest = INT_MIN;
	data->stack_a_largest = INT_MAX;
	data->stack_a = NULL;
	data->stack_b = NULL;
	if (argc == 1)
        no_input_error();
	if (argc == 2)
		quoted_args(argv);
	else if (argc > 2)
		no_quote_args(argc, argv);
	smallest_largest();
}

int	smallest_largest()
{
	t_data *data;
	int	i;

	data = get_data();
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