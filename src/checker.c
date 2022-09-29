#include "../includes/push_swap.h"
#include "../libft/libft.h"

// t_bool len_valid(char *argv)
// {
//     if (argv[0] == '-')
//     {
//         if (ft_strlen(argv) > 11)
// 			return (False);
// 		else if (argv < INT_MAX)
// 			return (False);
// 		else if (ft_strlen(argv) < 11)
// 			return (True);
//     }
//     else
//     {
//         if (ft_strlen(argv) > 10)
// 			return (False);
// 		else if (argv < INT_MAX)
// 			return (False);
// 		else if (ft_strlen(argv) < 10)
// 			return (True);
//     }
// }

t_bool input_valid_num (char c){
    if ((c >= 48 && c <= 57) || c == ' ' || c == '-' || c == '+')
        return (True);
    else
        return(False);
}

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


void input_validation(char **argv){
        
        // if(!input_valid_num(argv))
        //     write (2, "Error\n", 6);
        //     exit;
        if(dubs(argv))
        {
            write (2, "Error\n", 6);
            exit (0);
        }
        else
            exit (0);
}
