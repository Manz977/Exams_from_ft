

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int counter;
	counter = 8;
	unsigned char bit = 0;
	while (counter--)
	{
		bit = (octet >> counter) & 1;
		bit += '0';
		write(1, &bit, 1);
	}
}


int main ()
{
	unsigned char octet = 2;
	print_bits(octet);
}
