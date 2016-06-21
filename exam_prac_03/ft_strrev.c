#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	l;
	char	tmp;

	while (str[l])
		l++;
	l -= 1;
	i = 0;
	while (i < l)
	{
		tmp = str[i];
		str[i] = str[l];
		str[l] = tmp;
		i++;
		l--;
	}
	return (str);
}

int	main(void)
{
	char s[] = "Hello World!";
	printf("%s\n", ft_strrev(s));
	return (0);
}
