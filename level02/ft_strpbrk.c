



#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char *ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;


	i = 0;

	while(s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
			{
				return((char*)&s1[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}


int main()
{
	char s[] = "Hello World";
	char num[] = "or";

	char *match = strpbrk(s, num);

	printf("%s\n", match);

	char *match_two = ft_strpbrk(s, num);

	printf("%s\n", match_two);
}

