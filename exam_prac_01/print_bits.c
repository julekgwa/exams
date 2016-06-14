#include <unistd.h>
void	print_bits(unsigned char octet)
{
	char	s[9];
	int	oct;
	int	z;

	s[0] = '\0';
	oct = octet;
	z = 128;
	while (z > 0)
	{
		if (z & oct)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		z >>= 1;
	}
}
int	main(void)
{
	print_bits(2);
	write(1, "\n", 1);
	return (0);
}
