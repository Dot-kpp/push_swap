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

	data->stack_a = NULL;
	data->stack_b = NULL;
	if (argc == 1)
        no_input_error();
	if (argc == 2)
		quoted_args(argv);
	else if (argc > 2)
		no_quote_args(argc, argv);
	// get_extreme(lists);
	// get_extreme(lists);
	// return (true);
}