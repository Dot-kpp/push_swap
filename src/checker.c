#include "../includes/push_swap.h"

t_bool valid_input (char c){
    if ((c >= 48 && c <= 57) || c == ' ' || c == '-' || c == '+')
        return (True);
    else
        return(False);
}

// check condition for int max

// check doublon

t_bool dubs (char **argv)
{
    int i;
    int j;

    i = 0;
    while (argv[i])
    {
        
    }
}


t_bool input_validation(char *argv){
    
    int i;

    i = 0;
    while (argv[i]){
        if(valid_input(argv[i])){
            return (True);
        }
        else
            return(False);    
        i++;
    }
    return (0);
}
