
#include "push_swap.h"

int	is_sorted(t_data *data)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < data->size_a - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}

void	trio_sort(t_data *data)
{
	if (data->stack_a[0] < data->stack_a[1])
	{
		if (data->stack_a[0] > data->stack_a[2])
			rra(data, 1);
		else
		{
			rra(data, 1);
			sa(data, 1);
		}
	}
	else
	{
		if (data->stack_a[0] < data->stack_a[2])
			sa(data, 1);
		else if (data->stack_a[1] < data->stack_a[2])
			ra(data, 1);
		else
		{
			sa(data, 1);
			if (data->size_a != 2)
				rra(data, 1);
		}
	}
}

void	fi_sort(t_data *data)
{
	while (data->size_a > 3)
	{
		find_min_a(data);
		if (data->min_a == 0)
			pb(data);
		if (data->min_a < (data->size_a / 2))
			ra(data, 1);
		else
			rra(data, 1);
	}
	if (!is_sorted(data))
		trio_sort(data);
	while (data->size_b > 0)
		pa(data);
}

void	sort(t_data *data)
{
	if (data->size_a < 6)
		fi_sort(data);
	else
		sorts(data);
}
