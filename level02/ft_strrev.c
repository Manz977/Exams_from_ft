



#include <string.h>
#include <stdlib.h>
#include <stdio.h>



char *ft_strrev(char *str)
{
	if(!str || !*str)
	return(NULL);

	int i;
	int j;
	char tmp;

	i = 0;
	j = 0;
	while(str[j] != '\0')
	j++;

	while (i < j -1)
	{
		tmp = str[i];
		str[i] = str[j - 1];
		str[j - 1] = tmp;
		i++;
		j--;

	}
return (str);
}


int main()
{
	char str[] = "Habibi";

	ft_strrev(str);

	printf("%s\n", str);
	return(0);
}
