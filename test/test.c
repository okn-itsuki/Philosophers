#include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

bool	is_valid_arg(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!isdigit((int)av[i][j]))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

int	ft_atoi_strict(const char *s)
{
	long	res;

	res = 0;
	if (!s || !*s)
		return (-1);
	while (*s)
	{
		res = res * 10 + (*s - '0');
		if (res > INT_MAX)
			return (-1);
		s++;
	}
	return (res);
}
int	main(int ac, char **av)
{
	int	res;

	if (is_valid_arg(ac, av))
	{
		res = ft_atoi_strict(av[1]);
		if (res > 0)
			printf("SUCCESS : %d\n", res);
		else
			printf("ERROR : %d\n", res);
		return (0);
	}
	return (1);
}
