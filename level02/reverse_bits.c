
unsigned char  reverse_bits(unsigned char octet)
{
	unsigned char res;
	unsigned char bit;
	int counter;
	counter = 8;
	res = 0;

	while (counter--)
	{
		bit = (octet >> counter) & 1;
		if(bit == 1)
		{
			res = res | (1 << (7 - counter));
		}
	}
	return (res);
}

#include <stdio.h>


int	main(void)
{
	unsigned char bit = 0;
	// by changing the number on the next line, you change
	// the bits that are sent to the reverse_bits function
	// 5 => 0000 0101, the result should be 1010 0000
	unsigned char res = reverse_bits((unsigned char)5);

	int i = 8;
	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
}
