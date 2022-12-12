#include "../includes/push_swap.h"
    
    //validate input - Check for dups, check is ints, check spaces?, check size?

    //conversions (char to int)

    //swap functions

    // check sort

    //things to free:
    //output = ??


int main(int argc, char **argv)
{	
    t_data *data;
    data = get_data();
	init_data(argc, argv, data);
    // printf("%d", check_for_mid(data));
    // int i = 0;
    // while (i < data->stack_a_count)
    // {
    //     printf("%d\n", data->tmp_stack[i]);
    //     i++;
    // }
    sort_small_list(data);
    sort_big_list(data);

    return (0);
}