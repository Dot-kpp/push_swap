#include "../includes/push_swap.h"

t_bool valid_input (char c){
    if ((c >= 48 && c <= 57) || c == ' ' || c == '-' || c == '+')
        return (True);
    else
        return(False);
}

// check condition for int max
// check doublon

t_bool input_validation(char *argv){
    int i;

    i = 0;
    while (argv[i]){
        if(argv[i] > 2147483647)
            return(False);
        else if(valid_input(argv[i]))
            return(True);
        else
            return(False);    
        i++;
    }
}

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