#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	int i;
	int sep;

	i = 3;
	sep = 0;
	if (n <= 1)
		return ;
	while (n % 2 == 0)
	{
		if (sep)
			printf("*");
		printf("%d", 2);
		sep = 1;
		n /= 2;
	}
	while (i <= n)
	{
		while (n % i == 0)
		{
			if (sep)
				printf("*");
			printf("%d", i);
			sep = 1;
			n /= i;
		}
		i += 2;
	}
	if (n > 2)
	{
		if (sep)
			printf("*");
		printf("%d", n);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
