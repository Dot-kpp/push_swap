#include "../includes/push_swap.h"
    
    //validate input - Check for dups, check is ints, check spaces?, check size?

    //conversions (char to int)

    //swap functions

    // check sort

    //things to free:
    //output = ??

int main(int argc, char **argv)
{
    char **temp;    
	
    if (argc < 2)
	    exit (0);
    if (argc == 2)
        temp = ft_split(argv[1], ' ');
    else 
        temp = &argv[1];
    input_validation(temp);

    return (0);
}