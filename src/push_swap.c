#include "../includes/push_swap.h"
    
    //validate input - Check for dups, check is ints, check spaces?, check size?

    //conversions (char to int)

    //swap functions

    // check sort

    //things to free:
    //output = ??

int main(int argc, char **argv)
{

    /*
    char **input;    
	
    if (argc < 2)
	    exit (0);
    if (argc == 2)
        input = ft_split(argv[1], " ");
    else 
        input = &argv[1];
    */

   int i;

   i = 0;
   
	while (i < argc)
	{
		if (!input_validation(argv[i]))
			write (2, "Error\n", 6);
        i++;
	}
    return (0);
}