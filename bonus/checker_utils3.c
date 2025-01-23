
#include "checker.h"

void	rra(t_data *data)
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
}

void	rrb(t_data *data)
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
}

void	rrr(t_data *data)
{
	rra(data);
	rrb(data);
}
