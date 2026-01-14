
#include <stdio.h>


int max(int *tab, unsigned int len)
{
	if(len <= 0)
	{
		return(0);
	}

	unsigned int i;
	int max;

	i = 0;
	max = tab[0];

	while(i < len)
	{
		if(tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
	return (max);
}


int main()
{
	int array[] = {-12, -45, -23, -89, -5, -90, -34, -100, 100};
	unsigned int n = sizeof(array) / sizeof(array[0]);

	int largest_num = max(array, n);

	printf("The largest number in the array is %d\n", largest_num);

	return (0);
}
