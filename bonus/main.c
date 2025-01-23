
#include "checker.h"

void	ft_check_r_2(t_data *data, char *str)
{
	if (!ft_strncmp("rra", str, 3) && str)
		rra(data);
	else if (!ft_strncmp("rrb", str, 3) && str)
		rrb(data);
	else if (!ft_strncmp("rrr", str, 3) && str)
		rrr(data);
	else if (!ft_strncmp("ra", str, 2) && str)
		ra(data);
	else if (!ft_strncmp("rb", str, 2) && str)
		rb(data);
	else if (!ft_strncmp("rr", str, 2) && str)
		rr(data);
	else if (str)
		ft_exit_all('e');
}

void	ft_check_r(t_data *data, char *str)
{
	if (str == NULL && !(is_sorted(data)))
		ft_exit_all('k');
	if (!str && is_sorted(data) && data->size_b == 0)
		ft_exit_all('o');
	if (!str && data->size_b > 0)
		ft_exit_all('k');
	if (!(ft_strncmp("sa", str, 2)) && str)
		sa(data);
	else if (!ft_strncmp("sb", str, 2) && str)
		sb(data);
	else if (!ft_strncmp("ss", str, 2) && str)
		ss(data);
	else if (!ft_strncmp("pa", str, 2) && str)
		pa(data);
	else if (!ft_strncmp("pb", str, 2) && str)
		pb(data);
	else
		ft_check_r_2(data, str);
}

void	ft_exit(int errno)
{
	if (errno != 0)
		write(1, "Error\n", 6);
	exit(1);
}

int	main(int ac, char *av[])
{
	t_data	data;
	char	*a;
	char	*str;

	if (ac > 1)
	{
		a = ft_combine(ac, av);
		start(a, &data);
		while (1)
		{
			str = get_next_line(0);
			ft_check_r(&data, str);
			free(str);
		}
	}
	else
		return (0);
}
