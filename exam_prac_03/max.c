#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int		big;

	big = 0;
	i = 0;
	while (i < len)
	{
		if (tab[i] > big)
			big = tab[i];
		i++;
	}
	return (big);
}

int	main(void)
{
	int	arr[] = {1,3,14,56,29};
	printf("%d\n", max(arr, 5));
	return (0);
}
