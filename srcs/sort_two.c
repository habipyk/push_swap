
#include "push_swap.h"

int	find_min_b(t_data *data)
{
	int	i;
	int	index;

	i = 1;
	index = 0;
	while (i < data->size_b)
	{
		if (data->stack_b[index] > data->stack_b[i])
			index = i;
		i++;
	}
	data->min_b = index;
	return (index);
}

int	find_min_a(t_data *data)
{
	int	i;
	int	index;

	i = 1;
	index = 0;
	while (i < data->size_a)
	{
		if (data->stack_a[index] > data->stack_a[i])
			index = i;
		i++;
	}
	data->min_a = index;
	return (index);
}

int	find_max_b(t_data *data)
{
	int	i;
	int	index;

	i = 1;
	index = 0;
	while (i < data->size_b)
	{
		if (data->stack_b[index] < data->stack_b[i])
			index = i;
		i++;
	}
	data->max_b = index;
	return (index);
}

void	clclt_steps_max(t_data *data, int i)
{
	if (find_max_b(data) <= (data->size_b / 2))
	{
		if (i <= (data->size_a / 2))
		{
			if (find_max_b(data) <= i)
				data->index_steps[i] = i;
			else
				data->index_steps[i] = find_max_b(data);
		}
		else
			data->index_steps[i] += find_max_b(data);
	}
	else if (find_max_b(data) > (data->size_b / 2))
	{
		if (i > data->size_a / 2)
		{
			if ((data->size_b - find_max_b(data)) <= (data->size_a - i))
				data->index_steps[i] = (data->size_a - i);
			else
				data->index_steps[i] = data->size_b - find_max_b(data);
		}
		else
			data->index_steps[i] += (data->size_b - find_max_b(data));
	}
}

int	find_number(t_data *data, int nbr)
{
	int	i;

	i = -1;
	while (++i < data->size_b)
	{
		if (data->stack_b[i] == nbr)
			return (i);
	}
	return (-1);
}
