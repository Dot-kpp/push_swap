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
    sort_small_list(data);
    sort_big_list(data);

    return (0);
}