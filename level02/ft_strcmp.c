



#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while((s1[i] || s2[i]) && s1[i] == s2[i])
	i++;
	return(s1[i] - s2[i]);
}


int main()
{
	char str1[] = "Manar";
	char str2[] = "zanar";

	int res1;
	int res2;

	res1 = ft_strcmp(str1, str2);
	res2 = strcmp(str1, str2);

	printf("My strcmp: %d\n", res1);
	printf("original strcmp: %d\n", res2);
}
