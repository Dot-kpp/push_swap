#include "../includes/push_swap.h"


    //Take input
    
    //validate input - Check for dups, check is ints, check spaces?, check size?

    //conversions (char to int)

    //swap functions

    // check sort

    //things to free:
    //output = ??

int main(int argc, char **argv){
    int i;
	
	
	i = 1;
    if (argc < 2)
	    exit (0);
	while (i < argc)
	{
		if (!input_validation(argv[i]))
			write (2, "Error\n", 6);
        i++;
	}
    return (0);
}