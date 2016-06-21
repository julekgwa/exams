#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *s)
{
	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			ft_putchar('m' - (*s - 'n'));
		else if (*s >= 65 && *s <= 90)
			ft_putchar('M' - (*s - 'N'));
		else
			ft_putchar(*s);
		s++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	ft_putchar('\n');
	return (0);
}
