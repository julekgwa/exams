#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_spaces(void)
{
	int i;

	i = 0;
	while (i < 3)
	{
		ft_putchar(' ');
		i++;
	}
}

int	ft_find_space(char *s, int start)
{
	while (s[start])
	{
		if (s[start] != ' ' && s[start] != '\t')
			return (start);
		start++;
	}
	return (start);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				i = ft_find_space(av[1], i) - 1;
				if (av[1][i + 1] != '\0')
					ft_spaces();
			}
				if (av[1][i] != ' ' && av[1][i] != '\t')
					ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
