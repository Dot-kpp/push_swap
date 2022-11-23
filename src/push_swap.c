#include "../includes/push_swap.h"
    
    //validate input - Check for dups, check is ints, check spaces?, check size?

    //conversions (char to int)

    //swap functions

    // check sort

    //things to free:
    //output = ??



int main(int argc, char **argv)
{
    // t_data *data;

    // data = get_data();   
	
    if (argc < 2)
    {
        printf("fuck");
		exit (0);
    }
	// if (argc == 2)
	// 	check_quoted_args(argv);
	else if (argc >= 2)
	{
        input_validation(argv);
    }

    return (0);
}




/*

	if (argc < 2)
		exit (0);
	if (argc == 2)
		check_split(argv, &stack_a);
	else if (argc > 2)
	{
		check_numbers(argv, 1, 0);
		check_limits(argv, 1, 0);
		stack_a = ft_calloc(sizeof(t_stack), 1);
		if (!stack_a)
			exit (0);
		to_int_list(argv, 1, stack_a);
		check_doubles(stack_a);
		check_sorted(stack_a, argc - 1);
	}
	index_list(stack_a);
	push_swap(&stack_a, &stack_b);
	free_stack(stack_a);
	return (0);
*/