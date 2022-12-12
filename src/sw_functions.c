#include "../includes/push_swap.h"

int	sa(t_data *data, int i)
{
	if (data->stack_a_count <= 1)
		return (0);
	data->stack_a_tmp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = data->stack_a_tmp;
	if (i == 1)
		printf("sa\n");
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
		printf("sb\n");
	return (0);
}

int	ss(t_data *data, int i)
{
	if (data->stack_a_count <= 1 || data->stack_a_count <= 1)
		return (0);
	sa(data, 0);
	sb(data, 0);
	if (i == 1)
		printf("ss\n");
	return (0);
}

int	ra(t_data *data, int c)
{
	int	i;

	i = 0;
	if (data->stack_a_count < 2)
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

int	rb(t_data *data, int c)
{
	int	i;

	i = 0;
	if (data->stack_b_count <= 2)
		return (0);
	data->stack_b_tmp = data->stack_b[i];
	while (i < data->stack_b_count)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[i - 1] = data->stack_b_tmp;
	if (c == 1)
		printf("rb\n");
	return (0);
}

int	rr(t_data *data, int c)
{
	if (data->stack_a_count < 2 || data->stack_b_count < 2)
		return (0);
	ra(data, 0);
	rb(data, 0);
	if (c == 1)
		printf("rr\n");
	return (0);
}

int	rra(t_data *data, int c)
{
	int	i;

	if (data->stack_a_count < 2)
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

int	rrr(t_data *data, int c)
{
	if (data->stack_a_count < 2 || data->stack_b_count < 2)
		return (0);
	rra(data, 1);
	rrb(data, 1);
	if (c == 1)
		printf("rrr\n");
	return(0);

}

int	rrb(t_data *data, int c)
{
	int	i;

	if (data->stack_b_count <= 2)
		return (0);
	i = data->stack_b_count - 1;
	data->stack_b_tmp = data->stack_b[i];
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[i] = data->stack_b_tmp;
	if (c == 1)
		printf("rrb\n");
	return (0);
}

void	continue_pb(t_data *data)
{
	int	i;

	i = 0;
	data->stack_a_tmp = data->stack_b[i];
	data->stack_b[i] = data->stack_a[i];
	i++;
	while (i <= data->stack_b_count)
	{
		data->stack_b_tmp = data->stack_b[i];
		data->stack_b[i] = data->stack_a_tmp;
		data->stack_a_tmp = data->stack_b_tmp;
		i++;
	}
	data->stack_b[i] = data->stack_a_tmp;
	i = 0;
	while (i < data->stack_a_count)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
}

int	pb(t_data *data, int i)
{
	data->stack_b_tmp = INT_MAX;
	if (data->stack_a_count == 0)
		return (0);
	continue_pb(data);
	data->stack_b_count++;
	data->stack_a_count--;
	data->stack_a_smallest = INT_MAX;
	data->stack_b_tmp = INT_MAX;
	smallest_largest(data);
	if (i == 1)
		printf("pb\n");
	return (0);
}

void	continue_pa(t_data *data)
{
	int	i;

	i = 0;
	data->stack_a_tmp = data->stack_a[i];
	data->stack_a[i] = data->stack_b[i];
	i++;
	while (i <= data->stack_a_count)
	{
		data->stack_b_tmp = data->stack_a[i];
		data->stack_a[i] = data->stack_a_tmp;
		data->stack_a_tmp = data->stack_b_tmp;
		i++;
	}
	i = 0;
	while (i <= data->stack_b_count)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
}

int	pa(t_data *data, int i)
{
	if (data->stack_b_count == 0)
		return (0);
	continue_pa(data);
	data->stack_a_count++;
	data->stack_b_count--;
	data->stack_a_smallest = INT_MAX;
	smallest_largest(data);
	if (i == 1)
		printf("pa\n");
	return (0);
}