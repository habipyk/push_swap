
#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*combnumbers(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	free(s1);
	return (str);
}

char	*ft_combine(int ac, char *av[])
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(ft_strlen(av[1]) + 2);
	is_empty(av[1]);
	while (av[1][i])
	{
		str[i] = av[1][i];
		i++;
	}
	str[i] = ' ';
	str[i + 1] = '\0';
	i = 2;
	while (i < ac)
	{
		is_empty(av[i]);
		str = combnumbers(str, av[i]);
		if (i < ac - 1)
			str = combnumbers(str, " ");
		i++;
	}
	return (str);
}

void	structinit(t_data *data)
{
	data->count = 0;
	data->instant = 0;
	data->size = 0;
	data->i = 0;
	data->size_a = 0;
	data->size_b = 0;
}

void	start(char *str, t_data *data)
{
	structinit(data);
	num_check(str);
	num_count(str, data);
	allocate_numbers(str, data);
	is_equal(data);
	if (!is_a_sorted(data))
		sort(data);
}
