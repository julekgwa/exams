#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	const unsigned char *s;
	const unsigned char *p;

	s = (const unsigned char *)s1;
	p = (const unsigned char *)s2;
	while ((*s == *p) && *s)
	{
		s++;
		p++;
	}
	return (*s - *p);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("MINE: %d\nORIG: %d", ft_strcmp(av[1], av[2]),strcmp(av[1], av[2]));
	return (0);
}
