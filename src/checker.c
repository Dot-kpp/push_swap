#include "../includes/push_swap.h"

int len_valid(char *argv)
{
    if (argv[0] == '-')
    {
        if (ft_strlen(argv) > 11)
			return (0);
		else if (ft_atoi(argv) < INT_MAX)
			return (0);
		else if (ft_strlen(argv) < 11)
			return (1);
    }
    else
    {
        if (ft_strlen(argv) > 10)
			return (0);
		else if (ft_atoi(argv) < INT_MAX)
			return (0);
		else if (ft_strlen(argv) < 10)
			return (1);
    }
    return (0);
}

void input_valid_num (char **argv){
    int i;
    int j;

    i = 1;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][0] == '-' && j == '0')
                j++;
            if(ft_isdigit(argv[i][j]) == 0)
            {
                invalid_list_error();
                exit (0);
            }
            else 
                j++;
        }
        i++;
    }
}


void dubs (char **argv)
{
    int i;
    int j;

    i = 0;
    while (argv[i])
	{
		j = i;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
            {
                dubs_error();
                exit (0);
            }
            j++;
		}
        i++;
	}
    printf("no dubs");
}

void	quoted_args(char **argv)
{
    t_data *data;

    data = get_data();
    char	**list;
	int		listlen;
	int		i;

	listlen = 0;
	i = 0;
	list = ft_split(av[1], ' ');
    while (list[listlen])
		listlen++;
	data->stack_a = ft_calloc(sizeof(t_data), 1);
    while (list[i])
    {
        
    }
	
}
void	no_quote_args(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    t_data *data;

    data = get_data();
	data->stack_a = ft_calloc(sizeof(t_data), 1);

}
