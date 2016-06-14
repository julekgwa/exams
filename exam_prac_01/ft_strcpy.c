#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;
	i = 0;
	while (s2[i])
		s1[i] = s2[i++];
	s1[i] = '\0';
	return (s1);
}
int main(void)
{
	char *s;
	char *p = "Hello World";
	ft_strcpy(s, p);
	printf("%s\n", s);
	return (0);
}
