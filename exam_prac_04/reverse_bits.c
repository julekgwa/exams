#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
	octet = ((octet & 0x55) << 1) | ((octet & 0xAA) >> 1);
	octet = ((octet & 0x33) << 2) | ((octet & 0xCC) >> 2);
	return (octet << 4) | (octet >> 4);
}

int	main()
{
	char b = 'b';
	printf("%u", reverse_bits(b));
	return (0);
}
