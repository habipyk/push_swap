
#include "push_swap.h"

void	maxmin_int(long sum, long num)
{
	sum *= num;
	if (sum < -2147483648 || sum > 2147483647)
		ft_exit(1);
}

void	get_num(char *str, t_data *data)
{
	int	i;

	i = 0;
	data->temp = malloc(data->size + 1);
	data->temp[data->size] = '\0';
	while (i < data->size)
	{
		data->temp[i] = str[data->instant];
		data->instant++;
		i++;
	}
	data->size = 0;
}

int	ft_atoi(char *str, t_data *data)
{
	long	i;
	long	sum;
	long	num;

	get_num(str, data);
	i = 0;
	sum = 0;
	num = 1;
	if (data->temp[0] == '-' || data->temp[0] == '+')
	{
		if (data->temp[0] == '+')
			i++;
		else
			num *= -1;
		i++;
	}
	while (data->temp[i])
	{
		sum = (sum * 10) + (data->temp[i] - 48);
		i++;
		maxmin_int(sum, num);
	}
	free(data->temp);
	return ((int)sum * num);
}

int	ft_split(char *str, t_data *data)
{
	int	j;

	j = 0;
	while (str[data->i])
	{
		if (str[data->i] != ' ')
		{
			data->instant = data->i;
			data->i++;
			data->size++;
			while (str[data->i] >= '0' && str[data->i] <= '9')
			{
				data->i++;
				data->size++;
			}
			j = ft_atoi(str, data);
			return (j);
		}
		data->i++;
	}
	return (0);
}
