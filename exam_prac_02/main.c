#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2);

int main(void)
{
	char *s = malloc(sizeof(char*));
	char *p = "Hello World";
	ft_strcpy(s, p);
	printf("%s\n", s);
	return (0);
}
