#include <stdio.h>
#include <unistd.h>
int	main(int ac, char **av)
{
	int	i;
	char	*str;
	
	i = 0;
	if (ac > 1)
	{
		*av++;
		while (*av)
		{
			i = 0;
			str = *av;
			while (str[i])
			{
				if ((str[i + 1] == ' ' || str[i + 1] == '\0'))
				{
					if (str[i] >= 97 && str[i] <= 122)
						printf("%c", str[i] - 32);
					else
						printf("%c", str[i]);
				}
				else
				{
					if (str[i] >= 65 && str[i] <= 90)
						printf("%c", str[i] + 32);
					else
						printf("%c", str[i]);
				}
				i++;
			}
			printf("\n");
			av++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
