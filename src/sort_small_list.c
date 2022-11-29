#include "../includes/push_swap.h"

int check_if_sorted(t_data *data)
{

}

int	list_of_two(t_data *data)
{
	if (check_if_sorted(data) == 0)
	{
		free(data->stack_a);
		exit (0);
	}
	else
	{
		if (data->stack_a_smallest == data->stack_a[0])
		{
			free(data->stack_a;
			exit (0);
		}
		sa(data, 1);
		free(data->stack_a);
		exit (0);
	}
	return (0);
}

int list_of_three(t_data *data)
{
	if (data->stack_a[0] == data->stack_a_largest)
		ra(data, 1);
	else if (data->stack_a[1] == data->stack_a_largest)
		rra(data, 1);
	if (check_if_sorted(data) == 1)
		sa(data, 1);
	return (0);
}





int list_of_five(t_data *data)
{



//pick up here!!!!!!



}



int sort_small_list(void)
{
    t_data *data;

    data = get_data();
	if (data->stack_a_count == 2)
        list_of_two(data);
	if (data->stack_a_count == 3)
	{
		list_of_three(data);
		free(data->stack_a);
		exit (0);
	}	
	if (data->stack_a_count <= 5)
	{
		list_of_five(data);
		free(data->stack_a);
		free(data->stack_b);
		exit (0);
	}
	return (0);
}