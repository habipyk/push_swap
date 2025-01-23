
#include "push_swap.h"

void	rra(t_data *data, int count)
{
	int	i;
	int	tmp;

	i = (data->size_a - 1);
	if (data->size_a > 1)
	{
		tmp = data->stack_a[data->size_a - 1];
		while (i > 0)
		{
			data->stack_a[i] = data->stack_a[i - 1];
			i--;
		}
		data->stack_a[i] = tmp;
	}
	if (count == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_data *data, int count)
{
	int	i;
	int	tmp;

	i = (data->size_b - 1);
	if (data->size_b > 1)
	{
		tmp = data->stack_b[data->size_b - 1];
		while (i > 0)
		{
			data->stack_b[i] = data->stack_b[i - 1];
			i--;
		}
		data->stack_b[i] = tmp;
	}
	if (count == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_data *data)
{
	rra(data, 0);
	rrb(data, 0);
	write(1, "rrr\n", 4);
}
