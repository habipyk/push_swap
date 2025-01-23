
#include "push_swap.h"

void	ft_rotate_o(t_data *data)
{
	int	nbri;

	nbri = get_position_number(data, data->stack_a[data->cheapest]);
	if (data->cheapest == data->size_a - 1 && nbri == data->size_b - 1
		&& data->cheapest > data->size_a / 2 && nbri > data->size_b / 2)
	{
		rrr(data);
		data->cheapest = 0;
	}
	else if (data->cheapest == data->size_a - 1 && nbri != data->size_b - 1
		&& data->cheapest > data->size_a / 2)
	{
		rra(data, 1);
		data->cheapest = 0;
	}
	else if (nbri == data->size_b - 1 && nbri > data->size_b / 2)
		rrb(data, 1);
}

void	ft_rotate_o2(t_data *data)
{
	int	nbri;

	nbri = get_position_number(data, data->stack_a[data->cheapest]);
	if (data->cheapest > 0 && nbri > 0 && data->cheapest <= data->size_a / 2
		&& nbri <= data->size_b / 2)
	{
		rr(data);
		data->cheapest--;
	}
	else if (data->cheapest > 0 && nbri == 0 && data->cheapest <= data->size_a
		/ 2)
	{
		ra(data, 1);
		data->cheapest--;
	}
	else if (data->cheapest == 0 && nbri > 0 && nbri <= data->size_b / 2)
		rb(data, 1);
}

void	ft_rotate_o3(t_data *data)
{
	int	nbri;

	nbri = get_position_number(data, data->stack_a[data->cheapest]);
	if (data->cheapest < data->size_a - 1 && nbri < data->size_b - 1
		&& data->cheapest > data->size_a / 2 && nbri > data->size_b / 2)
	{
		rrr(data);
		data->cheapest++;
	}
	else if (data->cheapest < data->size_a - 1 && data->cheapest > data->size_a
		/ 2)
	{
		rra(data, 1);
		data->cheapest++;
	}
	else if (nbri < data->size_b - 1 && nbri > data->size_b / 2)
		rrb(data, 1);
}

void	ft_sort(t_data *data)
{
	ft_rotate_o(data);
	ft_rotate_o2(data);
	ft_rotate_o3(data);
}
