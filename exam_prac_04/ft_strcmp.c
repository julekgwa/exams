#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned const char	*s;
	unsigned const char	*p;

	s = (unsigned const char *)s1;
	p = (unsigned const char *)s2;
	while ((*s == *p) && *s)
	{
		s++;
		p++;
	}
	return (*s - *p);
}

int	main(int ac, char **av)
{
	printf("%d || %d", ft_strcmp(av[1], av[2]), strcmp(av[1], av[2]));
	return (0);
}
