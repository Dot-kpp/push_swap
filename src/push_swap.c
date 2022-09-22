#include "../includes/push_swap.h"

int main (int argc, char **argv) {

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
	while (i < argc)
	{
		if (input_validation(argv[i]))
		{
			printf(" true ");
		}
        else 
			printf(" false ");
        i++;
	}
}
    return (0);
}