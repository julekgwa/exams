#include <stdio.h>

int	ft_sqrt(int n)
{
	int	a;
	int	sq;

	a = 0;
	sq = 0;
	if (n < 0)
		return (0);
	while (sq < n)
	{
		a = n - (sq * sq);
		if (a == 0)
			return (sq);
		else if (a < 0)
			return (sq -1);
		sq++;
	}
	return (sq);
}

void	prime(int	n)
{
	int	i;

	i = 3;
	while (n % 2 == 0)
	{
		printf("%d ", 2);
		n = n / 2;
	}
	while (i <= ft_sqrt(n))
	{
		while (n % i == 0)
		{
			printf("%d ", i);
			n = n / i;
		}
		i += 2;
	}
	if (n > 2)
		printf("%d ", n);
}
int

main()
{
	prime(225225);
	return 0;
}