#include <unistd.h>

//void putnumber(int count)
//{

//	char n;
//	if(count > 100)
//	{
//		return;
//	}

//	if(count % 3 == 0 && count % 5 == 0)
//	{
//		write(1, "fizzbuzz", 8);
//	} else if ( count % 3 == 0)
//	{
//		write(1, "fizz", 4);
//	} else if (count % 5 == 0)
//	{
//		write(1, "buzz", 4);
//	} else
//	{
//		if(count >= 10)
//		{
//		n = count / 10 + '0';
//		write(1, &n, 1);
//		}
//		n = count % 10 + '0';
//		write(1, &n, 1);
//	}
//	write(1, "\n", 1);
//	putnumber(count + 1);
//}

void putnumber(int i)
{
	if(i > 9)
	putnumber(i / 10);

	write(1, &"0123456789"[i % 10], 1);
}
int main(void)
{
	int i = 1;
	while (i <= 100)
	{

	if(i % 3 == 0 && i % 5 == 0)
	{
		write(1, "fizzbuzz", 8);
	} else if ( i % 3 == 0)
	{
		write(1, "fizz", 4);
	} else if (i % 5 == 0)
	{
		write(1, "buzz", 4);
	} else
	putnumber(i);
	i++;
	write(1, "\n", 1);
}
}
