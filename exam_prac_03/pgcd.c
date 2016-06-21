#include <stdio.h>

int	pgcd(int n, int m)
{
	int	i;
	int	pg;

	i = 1;
	pg = 0;
	while (i <= n && i <= m)
	{
		if (n % i == 0 && m % i == 0)
			pg = i;
		i++;
	}
	return(pg);
}

int main()
{
	printf("%d\n", pgcd(17, 3));
	return (0);
}
