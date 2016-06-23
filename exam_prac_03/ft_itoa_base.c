#include <stdio.h>

char *ft_itoa_base(int value, int base)
{
	static	char rep[] = "0123456789abcdef";
	static	char buf[50];
	char	*ptr;
	int		num;

	ptr = &buf[49];
	*ptr = '\0';
	num = value;
	if (value < 0 && base == 10)
		value *= -1;
	if (value == 0)
		*--ptr = rep[value % base];
	while (value != 0)
	{
		*--ptr = rep[value % base];
		value /= base;
	}
	if (num < 0 && base == 10)
		*--ptr = '-';
	return (ptr);
}	

int	main()
{
	printf("%s\n", ft_itoa_base(-2, 10));
	return (0);
}
