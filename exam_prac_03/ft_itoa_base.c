#include <stdio.h>

char *ft_itoa_base(int value, int base)
{
	static	char rep[] = "0123456789abcdef";
	static	char buf[50];
	char	*ptr;

	ptr = &buf[49];
	*ptr = '\0';
	if (value == 0)
		*--ptr = rep[value % base];
	while (value != 0)
	{
		*--ptr = rep[value % base];
		value /= base;
	}
	return (ptr);
}	

int	main()
{
	printf("%s\n", ft_itoa_base(0, 2));
	return (0);
}
