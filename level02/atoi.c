
#include <stdio.h>
#include <stdlib.h>



int ft_isspace(char str)
{
	return((str >= 9 && str <= 13) || str == 32);
}


int ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(sign * res);

}


 int	main(void)
{
	char	str[] = "   1234ab567";
	int		result;
	int 	original_atoi;
	result = ft_atoi(str);
	printf("Input: \"%s\"\n", str);
	printf("ft_atoi result: %d\n", result);

	original_atoi = atoi(str);
	printf("atoi result: %d\n", original_atoi);

	return (0);
}
