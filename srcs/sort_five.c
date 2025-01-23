
#include "push_swap.h"

int	max_position(t_data *data, int *position, int ind)
{
	int	i;
	int	index;

	i = 1;
	index = 0;
	while (i < ind)
	{
		if (position[index] < position[i])
			index = i;
		i++;
	}
	return (find_number(data, position[index]));
}

int	get_position_number(t_data *data, int num_a)
{
	int	*position;
	int	i;
	int	index;

	position = malloc(sizeof(int) * (data->size_b));
	i = -1;
	index = 0;
	while (++i < data->size_b)
	{
		if (num_a > data->stack_b[i])
		{
			position[index] = data->stack_b[i];
			index++;
		}
	}
	index = max_position(data, position, index);
	free(position);
	return (index);
}

void	clclt_steps_alios(t_data *data, int i)
{
	data->b_i = get_position_number(data, data->stack_a[i]);
	if (data->b_i <= (data->size_b / 2))
	{
		if (i <= (data->size_a / 2))
		{
			if (data->b_i <= i)
				data->index_steps[i] = i;
			else
				data->index_steps[i] = data->b_i;
		}
		else
			data->index_steps[i] += data->b_i;
	}
	else if (data->b_i > (data->size_b / 2))
	{
		if (i > data->size_a / 2)
		{
			if ((data->size_b - data->b_i) <= (data->size_a - i))
				data->index_steps[i] = (data->size_a - i);
			else
				data->index_steps[i] = data->size_b - data->b_i;
		}
		else
			data->index_steps[i] += (data->size_b - data->b_i);
	}
}

int	take_cheapest(t_data *data)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (i < data->size_a)
	{
		if (data->index_steps[i] < data->index_steps[index])
			index = i;
		i++;
	}
	data->cheapest = index;
	return (index);
}

void	ft_start(t_data *data)
{
	if (data->stack_a[data->cheapest] < data->stack_b[find_min_b(data)])
	{
		while (1)
		{
			if (data->cheapest == 0 && find_max_b(data) == 0)
				break ;
			ft_min_sort(data);
		}
	}
	else
	{
		while (1)
		{
			if (data->cheapest == 0 && get_position_number(data,
					data->stack_a[data->cheapest]) == 0)
				break ;
			ft_sort(data);
		}
	}
	pb(data);
}
