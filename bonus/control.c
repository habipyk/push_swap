
#include "checker.h"

int	is_sorted(t_data *data)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < data->size_a - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}

void	is_equal(t_data *data)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < data->size_a)
	{
		while (result < data->size_a)
		{
			if (data->stack_a[i] == data->stack_a[result])
				ft_exit (1);
			result++;
		}
		i++;
		result = (i + 1);
	}
}

void	is_empty(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			flag = 1;
		i++;
	}
	if (flag == 0)
		ft_exit(1);
}
