#include "../includes/push_swap.h"

int	sa(t_data *data, int i)
{
	if (data->stack_a_count <= 1)
		return (0);
	data->stack_a_tmp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = data->stack_a_tmp;
	if (i == 1)
		ft_printf("sa\n");
	return (0);
}

int	sb(t_data *data, int i)
{
	if (data->stack_a_count <= 1)
		return (0);
	data->stack_b_tmp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = data->stack_b_tmp;
	if (i == 1)
		ft_printf("sb\n");
	return (0);
}

int	ss(t_data *data, int i)
{
	if (data->stack_a_count <= 1 || data->stack_a_count <= 1)
		return (0);
	sa(data, 0);
	sb(data, 0);
	if (i == 1)
		ft_printf("ss\n");
	return (0);
}

int	ra(t_data *data, int c)
{
	int	i;

	i = 0;
	if (data->stack_a_count <= 2)
		return (0);
	data->stack_b_tmp = data->stack_a[i];
	while (i < data->stack_a_count)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[i - 1] = data->stack_b_tmp;
	if (c == 1)
		printf("ra\n");
	return (0);
}

// int	rb(t_data *data, int c)
// {
// 	int	i;

// 	i = 0;
// 	if (lists->list_b.nbargs <= 2)
// 		return (0);
// 	lists->list_b.temp = lists->list_b.list[i];
// 	while (i < lists->list_b.nbargs)
// 	{
// 		lists->list_b.list[i] = lists->list_b.list[i + 1];
// 		i++;
// 	}
// 	lists->list_b.list[i - 1] = lists->list_b.temp;
// 	if (c == 1)
// 		printf("rb\n");
// 	return (0);
// }

// int	rr(t_data *data, int c)
// {
// 	if (lists->list_a.nbargs <= 2 || lists->list_b.nbargs <= 2)
// 		return (0);
// 	ra(lists, 0);
// 	rb(lists, 0);
// 	if (c == 1)
// 		printf("rr\n");
// 	return (0);
// }

int	rra(t_data *data, int c)
{
	int	i;

	if (data->stack_a_count <= 2)
		return (0);
	i = data->stack_a_count - 1;
	data->stack_a_tmp = data->stack_a[i];
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[i] = data->stack_a_tmp;
	if (c == 1)
		printf("rra\n");
	return (0);
}

