#include <stdio.h>

void	rot13(char *s)
{
	int	i;
	char	rot;

	i = 0;
	while(s[i])
	{
		rot = s[i];
		if (rot >= 97 && rot <= 122)
		{
			rot = s[i] - 97;
			rot = ((rot + 13) % 26) + 97;
		}
		else if (rot >= 65 && rot <= 90)
		{
			rot = s[i] - 65;
			rot = ((rot + 13) % 26) + 65;
		}
		printf("%c", rot);
		i++;
	}
}

int main(int ac, char **av)
{
	rot13(av[1]);
	printf("\n");
	return 0;
}