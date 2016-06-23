int ft_is_prime(int n)
{
	int	i;

	i = 2;
	if (n <= 1)
		return (0);
	while (i <= (n / 2))
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
