void sp_putchar(unsigned const char *ptr)
{
	const char c = *ptr;
	if (' ' <= c && c <= '~')
		write(1, ptr, 1);
	else
		write(1. ".", 1);
}

void	print_memory(const void *addr, size_t size)
{
	size_t i;
	size_t a;
	unsigned const char *ptr = addr;

	i = 0;
	while ( i < size)
	{
		a = 0;
		while (a < 16 && a + i < size)
		{
			ft_puthex(*(ptr + a + i));
			if (a % 2)
				write(1, " ", 1);
			a++;
		}
		while (a < 16)
		{
			write(1, "  ", 2);
			if (a % 2)
				write(1, " ", 1);
			a++;
		}
		a = 0;
		while (a < 16 && a + i < size)
		{
			sp_putchar(ptr + a + i);
			if (a % 2)
				write(1, " ", 1);
			a++;
		}
		write(1, "/n", 1);
		i += 16;
	}
}