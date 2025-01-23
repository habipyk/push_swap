
#include "push_swap.h"

void	pb(t_data *data)
{
	int	tmp;

	tmp = data->stack_a[0];
	ra(data, 0);
	data->size_b++;
	data->size_a--;
	if (data->size_b > 1)
		rrb(data, 0);
	data->stack_b[0] = tmp;
	write(1, "pb\n", 3);
}

void	pa(t_data *data)
{
	int	tmp;

	tmp = data->stack_b[0];
	rb(data, 0);
	data->size_a++;
	data->size_b--;
	if (data->size_a > 1)
		rra(data, 0);
	data->stack_a[0] = tmp;
	write(1, "pa\n", 3);
}

void	sa(t_data *data, int count)
{
	int	tmp;

	if (data->size_a > 1)
	{
		tmp = data->stack_a[0];
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = tmp;
	}
	if (count == 1)
		write(1, "sa\n", 3);
}

void	sb(t_data *data, int count)
{
	int	tmp;

	if (data->size_b > 1)
	{
		tmp = data->stack_b[0];
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = tmp;
	}
	if (count == 1)
		write(1, "sb\n", 3);
}

void	ss(t_data *data)
{
	sa(data, 0);
	sb(data, 0);
	write(1, "ss\n", 3);
}
