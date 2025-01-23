
#include "push_swap.h"

void	ft_rotate_m(t_data *data)
{
	int	nbri;

	nbri = find_max_b(data);
	if (data->cheapest == data->size_a - 1 && nbri == data->size_b - 1
		&& data->cheapest > 1)
	{
		rrr(data);
		data->cheapest = 0;
	}
	else if (data->cheapest == data->size_a - 1 && data->cheapest > 1)
	{
		rra(data, 1);
		data->cheapest = 0;
	}
	else if (nbri == data->size_b - 1 && nbri > 1)
		rrb(data, 1);
}

void	ft_rotate_m2(t_data *data)
{
	int	nbri;

	nbri = find_max_b(data);
	if (data->cheapest <= data->size_a / 2 && nbri <= data->size_b / 2
		&& data->cheapest > 0 && nbri > 0)
	{
		rr(data);
		data->cheapest--;
	}
	else if (data->cheapest > 0 && data->cheapest <= data->size_a / 2)
	{
		ra(data, 1);
		data->cheapest--;
	}
	else if (nbri > 0 && nbri <= data->size_b / 2)
		rb(data, 1);
}

void	ft_rotate_m3(t_data *data)
{
	int	nbri;

	nbri = find_max_b(data);
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

void	ft_min_sort(t_data *data)
{
	ft_rotate_m(data);
	ft_rotate_m2(data);
	ft_rotate_m3(data);
}
