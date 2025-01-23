

#include "checker.h"

void	ra(t_data *data)
{
	int	i;
	int	tmp;

	i = 0;
	if (data->size_a > 1)
	{
		tmp = data->stack_a[i];
		while (i < data->size_a - 1)
		{
			data->stack_a[i] = data->stack_a[i + 1];
			i++;
		}
		data->stack_a[i] = tmp;
	}
}

void	rb(t_data *data)
{
	int	i;
	int	tmp;

	i = 0;
	if (data->size_b > 1)
	{
		tmp = data->stack_b[i];
		while (i < data->size_b - 1)
		{
			data->stack_b[i] = data->stack_b[i + 1];
			i++;
		}
		data->stack_b[i] = tmp;
	}
}

void	rr(t_data *data)
{
	ra(data);
	rb(data);
}
