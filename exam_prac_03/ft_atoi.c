#include <stdio.h>
#include <stdlib.h>

int	ft_isspace(char c)
{
	if (c == '\f' || c == '\n' || c == '\v' || c == '\n' || c == '\t' || c == ' ' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	results;

	sign = 1;
	results = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		results = results * 10 + *str - '0';
		str++;
	}
	return (sign * results);
}

int	main()
{
	char *s = "					\t \r\t\f\v\n3445";
	printf("MINE: %d\nORIG: %d", ft_atoi(s), atoi(s));
	return (0);
}
