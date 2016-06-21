#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	c = 12;
	int	d = 6;
	ft_swap(&c, &d);
	printf("%d %d", c, d);
	return (0);
}
