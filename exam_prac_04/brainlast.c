char *init_ptr(void)
{
	char	*ptr;
	int 	i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * 2050);
	if (ptr)
	{
		while (i < 2050)
		{
			ptr[i] = 0;
			i++;
		}
	}
	return (ptr);
}

void	brainfuck(char *s)
{
	int i;
	int loop;
	char *ptr;

	i = 0;
	ptr = init_ptr();
}