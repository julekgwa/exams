#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	char	a;
	int	j;

	j = 1;
	if (ac > 1)
	{
		while (av[j])
		{
			i = 0;
			while (av[j][i])
			{
				a = av[j][i];
				if (a >= 65 && a <= 90)
					a += 32;
				if (av[j][i + 1] == ' ' || av[j][i + 1] == '\t' || av[j][i + 1] == '\0') 
				{
					if (a >= 97 && a <= 122)
						a -= 32;
				}
				ft_putchar(a);
				i++;
			}
			j++;
		}
	}
	ft_putchar('\n');
	return (0);
}
