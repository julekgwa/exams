#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char	*s_1;
	const unsigned char	*s_2;

	s_1 = (const unsigned char *)s1;
	s_2 = (const unsigned char *)s2;
	while ((*s_1 == *s_2) && *s_1)
	{
		s_1++;
		s_2++;
	}
	return (*s_1 - *s_2);
}

int	main(void)
{
	char	*s = "Hello World";
	char	*p = "Hello World";
	printf("Mine: %d\nLibc's: %d\n", ft_strcmp(s, p), strcmp(s, p));
	printf("%s | %s", s, p);
	return (0);
}
