#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;
	int c;
	char alph;
	i = 1;
	if (argc > 2)
	{
		ft_putchar('\n');
	}
	else
	{
		while (argv[i] != 0)
		{
			c = 0;
			while (argv[i][c] != '\0')
			{
				alph = argv[i][c];
				alph++;
				if (alph == 123) 
				{
					alph = 'a';
				}
				if (alph == 91) 
				{
					alph = 'A';
				}
				ft_putchar(alph);
				c++;
			}
			i++;
		}
		ft_putchar('\n');
	}
	return 0;
}

