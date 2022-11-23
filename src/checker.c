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


void input_validation(char **argv)
{
    input_valid_num(argv);
    // dubs(argv);
    // len_valid(argv);

}

void	check_quoted_args(char **argv)
{
    t_data *data;
	char	**quoted_args;

    data = get_data();
	quoted_args = ft_split(argv[1], ' ');
	if (quoted_args[0] == NULL)
	{
		exit(0);
	}
	input_valid_num(quoted_args);
	data->stack_a = ft_calloc(sizeof(t_data), 1);

}
