#include <unistd.h>

void	ft_put(char c)
{ 
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_put(s[i]);
		i++;
	}
}

int	wdmatch(char *s1, char *s2)
{
	while (*s1)
	{
		while (*s2 && *s2 != *s1)
			s2++;
		if (*s2 != *s1)
			return (0);
		s1++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		if (wdmatch(av[1], av[2]))
			ft_putstr(av[1]);
	ft_put('\n');
	return (0);
}
