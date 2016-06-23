#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last_word(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i -= 1;
	while (s[i] == ' ' || s[i] == '\t')
		i--;
	while ((s[i] != ' ' && s[i] != '\t') && i >= 0)
		i--;
	i += 1;
	while (s[i] && s[i] != ' ' && s[i] != '\t')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_last_word(av[1]);
	ft_putchar('\n');
	return (0);
}
