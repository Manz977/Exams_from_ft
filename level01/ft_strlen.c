

int ft_strlen(char *str)
{
	int i;
	i = 0;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	return i;
}

//#include <stdio.h>

//int main(void)
//{
//	int i = 0;
//	char *str = "Hello World";
//	i = ft_strlen(str);

//	printf("%i\n", i);
//	return 0;
//}
