#include <stdio.h>

char *ft_strrev(char *str)
{
	int	i;
	int	size;
	char	tmp;

	i = 0;
	while (str[i])
		i++;
	size = i - 1;
	i = 0;
	while (i < size)
	{
		tmp = str[i];
		str[i] = str[size];
		str[size] = tmp;
		i++;
		size--;
	}
	return (str);
}

int	main()
{
	char s[] = "Hello World!";
	char *ps = ft_strrev(s);
	printf("%s\n", ps);
	return (0);
}
