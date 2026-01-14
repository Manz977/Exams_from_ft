
unsigned char swap_bits(unsigned char octet)
{
	return(octet >> 4 | octet << 4);
}

#include <stdio.h>

int main()
{
	unsigned char octet = 1;

	unsigned char res;

	res = swap_bits(octet);

	printf("Original: %u, swapped: %u", octet, res);
	return (0);
}
