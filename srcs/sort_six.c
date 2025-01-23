
#include "push_swap.h"

void	f_t_cheapest(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->size_a)
	{
		if (i <= (data->size_a / 2))
			data->index_steps[i] = i;
		else if (i > (data->size_a / 2))
			data->index_steps[i] = (data->size_a - i);
		if (data->stack_a[i] < data->stack_b[find_min_b(data)])
			clclt_steps_max(data, i);
		else
			clclt_steps_alios(data, i);
		data->index_steps[i] += 1;
	}
	take_cheapest(data);
}

void	sorts(t_data *data)
{
	data->index_steps = malloc(data->size_a * sizeof(int));
	pb(data);
	pb(data);
	while (0 < data->size_a)
	{
		f_t_cheapest(data);
		ft_start(data);
	}
	ft_rotate(data);
	while (data->size_b != 0)
		pa(data);
}

void	ft_rotate(t_data *data)
{
	find_min_b(data);
	if (data->min_b < data->size_b / 2)
	{
		while (data->min_b != data->size_b - 1)
		{
			rb(data, 1);
			find_min_b(data);
		}
	}
	else
	{
		while (data->min_b != data->size_b - 1)
		{
			rrb(data, 1);
			find_min_b(data);
		}
	}
}
