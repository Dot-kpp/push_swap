#include "../includes/push_swap.h"
#include "../libft/libft.h"

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
		j = i;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[i + 1]))
            {
				return (False);
            }
            j++;
		}
        i++;
	}
	return (True);
}


t_bool input_validation(char **argv){
        
        if(valid_input(argv[i]))
            return (True);
        if(dubs(argv))
            return (True);
        else
            return(False);
        i++;
    }
    return (0);
}
