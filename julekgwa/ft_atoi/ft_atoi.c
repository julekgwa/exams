int	ft_atoi(const char *str)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while(str[i] != '\0')
	{
		total += str[i] - '0' + 48;
		i++;
	}
	return (total);
}
