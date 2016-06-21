#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	ft_sqrt(int num)
{
	int	a;
	int	sq;

	if (num < 0)
		return (0);
	while (sq < num)
	{
		a = num - (sq *sq);
		if ( a == 0)
			return (sq);
		else if (a < 0)
			return (sq - 1);
		sq++;
	}
	return (sq);
}

void	ft_prime(int	n)
{
	int	i;
	int	y;

	i = 3;
	y = 0;
	while (n % 2 == 0)
	{
		ft_putnbr(2);
		ft_putchar('*');
		y = 1;
		n = n / 2;
	}
	while (i <= ft_sqrt(n))
	{
		while(n % i == 0)
		{
			if (y)
				ft_putchar('*');
			ft_putnbr(i);
			y = 1;
			n = n / i;
		}
		i += 2;
	}
	if (n > 2)
	{
		ft_putchar('*');
		ft_putnbr(n);
	}
}

int	main(void)
{
	ft_prime(8333325);
	return (0);
}
