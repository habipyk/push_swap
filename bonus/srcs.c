
#include "checker.h"

void	ft_exit_all(char c)
{
	if (c == 'o')
		write(1, "OK\n", 3);
	else if (c == 'k')
		write(1, "KO\n", 3);
	else if (c == 'e')
		ft_exit(1);
	exit(0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] < str2[i])
			return (-1);
		else if (str1[i] > str2[i])
			return (1);
		i++;
	}
	return (0);
}
