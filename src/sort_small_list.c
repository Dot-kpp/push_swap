#include "../includes/push_swap.h"

int check_if_sorted(t_data *data)
{
	int	i;

	i = 1;
	while (i < data->stack_a_count - 1)
	{
		if ((data->stack_a[i] < data->stack_a[i + 1]) && (data->stack_a[i] > data->stack_a[i - 1]))
				i++;
		else
			return (1);
	}
	printf("List sorted!");
	return (0);
}

void	list_of_two(t_data *data)
{
	if (data->stack_a_smallest == data->stack_a[0])
		{
			free(data->stack_a);
			already_sorted();
		}
		sa(data, 1);
		free(data->stack_a);
		exit (0);
}


int list_of_three(t_data *data)
{
	 while (check_if_sorted(data) == 1)
	 {
		if (data->stack_a[0] != data->stack_a_smallest)
		{
			sa(data, 1);
		}
		if (data->stack_a[0] == data->stack_a_largest)
		{	
			ra(data, 1);
		}
		if (data->stack_a[1] == data->stack_a_largest)	
		{	
			rra(data, 1);
		}
	 }
	return (0);
}





int list_of_five(t_data *data)
{
	pb(data);
	return(0);
}



int sort_small_list(t_data *data)
{
	if (data->stack_a_count == 2)
	{
        list_of_two(data);
	}
	else if (data->stack_a_count == 3)
	{
		list_of_three(data);
		free(data->stack_a);
		exit (0);
	}	
	else if (data->stack_a_count <= 5)
	{
		list_of_five(data);
		free(data->stack_a);
		free(data->stack_b);
		exit (0);
	}
	return (0);
}