#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_skip_first(char *s)
{
	int	i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\t') && s[i])
		i++;
	while ((s[i] != ' '  && s[i] != '\t') && s[i])
		i++;
	i += 1;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_display_first(char *s)
{
	int i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\t') && s[i])
		i++;
	if (s[i] == ' ' || s[i] == '\t')
	{
		ft_putchar(' ');
		i++;
	}
	while (s[i] != ' ' && s[i] != '\t' && s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	main(int ac , char **av)
{
	if (ac == 2)
	{
		ft_skip_first(av[1]);
		ft_putchar(' ');
		ft_display_first(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
