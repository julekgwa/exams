#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int	i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * strlen(src));
	if (dup)
	{
		while (src[i])
		{
			dup[i] = src[i];
			i++;
		}
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char *s = "Hello World";
	char *p =ft_strdup(s);
	printf("%s\n", p);
	return (0);
}
