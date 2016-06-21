#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int	i;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char *s = "Duplicate";
	char *p = ft_strdup(s);
	printf("%s | %s", s,p);
	return (0);
}
