#include <stdlib.h>
#include <unistd.h>

char	*init_ptr(void)
{
	int i;
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * 2050);
	i = 0;
	if (ptr)
	{
		while (i < 2050)
		{
			ptr[i] = 0;
			i++;
		}
	}
	return (ptr);
}

void	brainfuck(char *s)
{
	int i;
	int loop;
	char *ptr;

	i = 0;
	ptr = init_ptr();
	while (s[i])
	{
		if (s[i] == '>')
			ptr++;
		else if (s[i] == '<')
			ptr--;
		else if (s[i] == '+')
			(*ptr)++;
		else if (s[i] == '-')
			(*ptr)--;
		else if (s[i] == '.')
			write(1, ptr, 1);
		else if (s[i] == '[')
		{
			if (*ptr == 0)
			{
				loop = 0;
				while (s[i])
				{
					if (s[i] == '[')
						loop++;
					if (s[i] == ']')
						loop--;
					if (loop == 0)
						break ;
					i++;
				}
			}
		}
		else if (s[i] == ']')
		{
			if (*ptr != 0)
			{
				loop = 0;
				while (s[i])
				{
					if (s[i] == ']')
						loop++;
					if (s[i] == '[')
						loop--;
					if (loop == 0)
						break ;
					i--;
				}
			}
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		brainfuck(av[1]);
	else
		write(1, "\n", 1);
	return 0;
}