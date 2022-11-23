#include "../includes/push_swap.h"

t_data	*get_data(void)
{
	static t_data *data;
	data = NULL;

	if (data == NULL)
		data = ft_calloc(1, sizeof(t_data));
	return (data);
}

void	init_data()
{
	t_data	*data;
	data = get_data();

	data->stack_a = NULL;
	data->stack_b = NULL;
}