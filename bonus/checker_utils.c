
#include "checker.h"

void	pb(t_data *data)
{
	int	tmp;

	tmp = data->stack_a[0];
	ra(data);
	data->size_b++;
	data->size_a--;
	if (data->size_b > 1)
		rrb(data);
	data->stack_b[0] = tmp;
}

void	pa(t_data *data)
{
	int	tmp;

	tmp = data->stack_b[0];
	rb(data);
	data->size_a++;
	data->size_b--;
	if (data->size_a > 1)
		rra(data);
	data->stack_a[0] = tmp;
}

void	sa(t_data *data)
{
	int	tmp;

	if (data->size_a > 1)
	{
		tmp = data->stack_a[0];
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = tmp;
	}
}

void	sb(t_data *data)
{
	int	tmp;

	if (data->size_b > 1)
	{
		tmp = data->stack_b[0];
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = tmp;
	}
}

void	ss(t_data *data)
{
	sa(data);
	sb(data);
}
