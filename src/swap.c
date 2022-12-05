// #include "../includes/push_swap.h"

// int	sa(t_data *data, int i)
// {
// 	if (data->stack_a_count <= 1)
// 		return (0);
// 	data->stack_a_tmp = data->stack_a[0];
// 	data->stack_a[0] = data->stack_a[1];
// 	data->stack_a[1] = data->stack_a_tmp;
// 	if (i == 1)
// 		ft_printf("sa\n");
// 	return (0);
// }

// int	sb(t_data *data, int i)
// {
// 	if (data->stack_a_count <= 1)
// 		return (0);
// 	data->stack_b_tmp = data->stack_b[0];
// 	data->stack_b[0] = data->stack_b[1];
// 	data->stack_b[1] = data->stack_b_tmp;
// 	if (i == 1)
// 		ft_printf("sb\n");
// 	return (0);
// }

// int	ss(t_data *data, int i)
// {
// 	if (data->stack_a_count <= 1 || data->stack_a_count <= 1)
// 		return (0);
// 	sa(data, 0);
// 	sb(data, 0);
// 	if (i == 1)
// 		ft_printf("ss\n");
// 	return (0);
// }