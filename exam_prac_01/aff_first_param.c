#include <unistd.h>

static int ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		write(1, av[1], ft_strlen(av[1]));
	write(1, "\n", 1);
	return (0);
}
