
void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
#include <stdio.h>
int main (void)
{
	int a = 2;
	int b = 3;

	printf("A:%i\nb:%i\n",a, b);

	ft_swap(&a, &b);
	printf("after the swap\n");
	printf("A:%i\nb:%i\n",a, b);
	return 0;
}
