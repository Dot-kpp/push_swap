

#include "../includes/push_swap.h"

void savior_function(t_data *data)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < data->tmp_stack_count)
	{
		if(data->stack_b_count == 2)
		{
			pa(data, 1);
			pa(data, 1);
		}
		while (data->stack_b[i] != data->tmp_stack[data->tmp_stack_count - j])
			i++;
		if (i > check_for_mid(data))
		{
			while (data->stack_b[0] != data->tmp_stack[data->tmp_stack_count - j])
				rrb(data, 1);
		}
		else if (i <= check_for_mid(data))
		{
			while (data->stack_b[0] != data->tmp_stack[data->tmp_stack_count - j])
				rb(data, 1);
		}
	}
}


void define_chunk_size(t_data *data)
{
	if (data->stack_a_count <= 10)
		data->chunk_size = 2;
	else if (data->stack_a_count <= 20)
		data->chunk_size = 5;
	else if (data->stack_a_count <= 100)
		data->chunk_size = 9;
	else
		data->chunk_size = 27;

}

void sort_direction(t_data *data, int v, int w)
{
	int j;

	j = 0;
	while (j <= data->stack_a_count)
	{
		if (data->stack_b[0] > check_for_mid(data))
			rb(data, 1);
		else if (data->stack_b[data->stack_b_count - 1] < check_for_mid(data))
			rrb(data, 1);
		if (data->stack_b[1] < data->stack_b[0])
		{
			if (data->stack_a[1] < data->stack_a[0])
				sa(data, 1);
			sb(data, 1);
		}
		if (data->stack_a[0] >= w && data->stack_a[0] < v)
			pb(data, 1);
		else
			ra(data, 1);
		j++;
	}
}

int sort_big_list(t_data *data)
{
	int	v;
	int	w;

	v = 0;
	w = 0;
	v = check_for_mid(data);
	w = check_for_mid(data);

	define_chunk_size(data);

	while ( data->stack_a_count > 0)
	{
		v = v + data->chunk_size;
		w = w - data->chunk_size;
		sort_direction(data, v, w);
	}
	
	savior_function(data);



	// while(check_if_sorted(data) == 1)
	// {
		// while(data->stack_a_count > 0)
		// {
		// 	if (data->stack_a[0] == check_for_small(data))
		// 	{
		// 		pb(data, 1);
		// 	}
		// 	else if (data->stack_a[1] == check_for_small(data))
		// 	{
		// 		sa(data, 1);
		// 		pb(data, 1);
		// 	}
		// 	else if (data->stack_a[0] > check_for_mid(data))
		// 		rra(data, 1);
		// 	else {
		// 		ra(data, 1);
		// 	}
		// }
		// while(data->stack_b_count > 0)
		// 	pa(data, 1);

	return(0);
}
