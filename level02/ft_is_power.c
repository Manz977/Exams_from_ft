//int	    is_power_of_2(unsigned int n)
//{
//	if(n <= 0)
//	{
//		return 0;
//	}
//	if((n &(n - 1)) == 0)
//	{
//		return 1;
//	}
//	return 0;
//}

int	    is_power_of_2(unsigned int n)
{
	unsigned int num;

	num = 1;

	while(num <= n)
	{
		if(num == n)
			return (1);
		num = num * 2;
	}
	return (0);
}
#include <stdio.h>
int main() {
    int num = 4;

    // This is just to test your function
    if (is_power_of_2(num)) {
        printf("%d is a power of 2\n", num);
    } else {
        printf("%d is NOT a power of 2\n", num);
    }

    return 0;
}
