int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	equal;

	i = 0;
	equal = -1;
	while((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if((s1[1] == s2[1]) && (s1[i + 1] == s2[i + 1]))
		{
			equal = 0;
		}
		else
			equal = -1;
		i++;
	}
	return (equal);
}
