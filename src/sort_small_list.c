#include "../includes/push_swap.h"

int check_for_big(t_data *data)
{
	int largest;
	int	i;

	largest = INT_MIN;
	i = 0;
	while (i < data->stack_a_count)
	{
		if(largest < data->stack_a[i])
		{
			largest = data->stack_a[i];
			i++;
		}	
		else
			i++;

	}
	return(largest);
}

int check_for_small(t_data *data)
{
	int smallest;
	int	i;

	smallest = INT_MAX;
	i = 0;
	while (i < data->stack_a_count)
	{
		if(smallest > data->stack_a[i])
		{
			smallest = data->stack_a[i];
			i++;
		}	
		else
			i++;

	}
	return(smallest);
}
int check_for_mid(t_data *data)
{
	int mid;
	int	i;

	mid = 0;
	i = 0;
	while (i < data->stack_a_count)
	{
		if(smallest > data->stack_a[i])
		{
			smallest = data->stack_a[i];
			i++;
		}	
		else
			i++;

	}
	return(mid);
}





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
	printf("List sorted!\n");
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
	int big;

	 while (check_if_sorted(data) == 1)
	 {
		big = check_for_big(data);
		if (data->stack_a[0] == big)
		{	
			ra(data, 1);
		}
		if (data->stack_a[1] == big)	
		{	
			rra(data, 1);
		}
		if (data->stack_a[0] != data->stack_a_smallest && data->stack_a[1] == data->stack_a_smallest)
		{
			sa(data, 1);
		}
	 }
	return (0);
}

int list_of_five(t_data *data)
{
	while (data->stack_a_count > 3)
	{
		if (data->stack_a[0] == check_for_small(data))
			pb(data, 1);
		else
			ra(data, 1);
	}
	list_of_three(data);
	pa(data, 1);
	if (data->stack_b_count != 0)
		pa(data, 1);
	return(0);
}

int sort_small_list(t_data *data)
{
	init_small(data);
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