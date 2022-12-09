

#include "../includes/push_swap.h"

int sort_hundred(t_data *data)
{
	// int i;
	while(data->stack_a_count != 0)
	{
		if (data->stack_a[0] == check_for_small(data))
			pb(data, 1);
		else if (data->stack_a[0] >= check_for_mid(data))
			rra(data, 1);
		else
			ra(data, 1);
	}	
	// i = 0;
	// while(check_if_sorted(data) == 1)
	// {
	// 	if (data->stack_a[i] <= data->tmp_stack[10])
	// 	{
	// 		pa(data, 1);
	// 	}
	// }
	return(0);
}

int sort_f_hundred(t_data *data)
{
	(void) data;
	return(0);
}

int sort_big_big(t_data *data)
{
	(void) data;
	return(0);
}

int sort_big_list(t_data *data)
{
	if (data->stack_a_count <= 5)
		return(0);
	else if (data->stack_a_count <= 100)
	{
        sort_hundred(data);
	}
	else if (data->stack_a_count <= 500)
	{
		sort_f_hundred(data);
	}
	else if (data->stack_a_count > 500)
	{
		sort_big_big(data);
	}
	return(0);
}