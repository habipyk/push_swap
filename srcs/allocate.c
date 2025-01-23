
#include "push_swap.h"

void	allocate_numbers(char *str, t_data *data)
{
	int	i;

	i = 0;
	data->stack_a = malloc(data->count * sizeof(int));
	data->stack_b = malloc(data->count * sizeof(int));
	while (i <= (data->count - 1))
	{
		data->stack_a[i] = ft_split(str, data);
		data->size_a++;
		i++;
	}
}

void	num_check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			while ((str[i + 1] >= '0' && str[i + 1] <= '9'))
				i++;
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				ft_exit(1);
		}
		else if (str[i] != ' ' && (str[i] < '0' || str[i] > '9')
			&& str[i] != '-' && str[i] != '+')
			ft_exit(1);
		else if (str[i] == '-' && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
			ft_exit(1);
		i++;
	}
}

void	num_count(char *str, t_data *data)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || (str[i] >= '0' && str[i] <= '9') || str[i] == '+')
		{
			if ((str[i] == '-' || str[i] == '+') && (str[i + 1] >= '0' && str[i
						+ 1] <= '9'))
			{
				while ((str[i + 1] >= '0' && str[i + 1] <= '9'))
					i++;
				if (str[i + 1] != ' ' && str[i + 1] != '\0')
					ft_exit(1);
				data->count++;
			}
			else if ((str[i] >= '0' && str[i] <= '9'))
			{
				while ((str[i + 1] >= '0' && str[i + 1] <= '9'))
					i++;
				data->count++;
			}
		}
		i++;
	}
}
