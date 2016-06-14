#include <stdio.h>
#include <math.h>

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
			return (sq - 1);
		sq++;
	}
	return (sq);
}

void	fprime(int n)
{
	int	i;

	i = 3;
	while (n % 2 == 0)
	{
		printf("%d*", 2);
		n /= 2;
	}
	while (i <= ft_sqrt(n))
	{
		while (n % i == 0)
		{
			printf("%d", i);
			n = n / i;
			printf("*");
		}
		i += 2;
	}
	if (n > 2)
		printf("%d", n);
}

int	ft_atoi(char *s)
{
	int	sum;
	int	sign;
	int	found;

	sum = 0;
	sign = 1;
	found = 1;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s && found)
	{
		if (*s >= '0' && *s <= '9')
			sum = sum * 10 + *s - '0';
		else
			found = 0;
		s++;
	}
	return (sign * sum);
}

int main(int ac, char **av)
{
	fprime(ft_atoi(av[1]));
	return 0;
}