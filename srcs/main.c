
#include "push_swap.h"

void	ft_exit(int errno)
{
	if (errno != 0)
		write (1, "Error\n", 6);
	exit(1);
}

int	main(int ac, char *av[])
{
	t_data	data;
	char	*a;

	if (ac > 1)
	{
		a = ft_combine(ac, av);
		start(a, &data);
	}
	else
		return (0);
}
