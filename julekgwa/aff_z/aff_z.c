#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

int	main(int argc, char **argv)
{
	int	match;
	int	i;
	int c = 0;
	match = 0;
	i =	0;
	if (argc > 1)
	{
		ft_putchar('z');
		ft_putchar('\n');
	}
	else
	{
		while (argv[i] != '\0')
		{
			while (argv[i][c] != '\0') 
			{
				if (argv[i][c] == 122) 
				{
				   	match = 1;
				   	argv[i][c + 1] = 0;
				   	argv[i + 1] = 0;
				}
				c++;
			}
			i++;
		}
		if (match == 1) 
		{
			ft_putchar('z');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('z');
			ft_putchar('\n');
		}
	}
	return (0);
}

