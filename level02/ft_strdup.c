#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_stlrn(char *str)
{
	int i;

	i = 0;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	return(i);
}

char *ft_strdup(char *src)
{
	int i;
	int length;
	char *tmp;

	i = 0;
	length = ft_stlrn(src);
	tmp = malloc(sizeof(char) * length + 1);
	if(!tmp)
	return(NULL);

	while(src[i] != '\0')
	{
		*tmp = src[i];
		i++;
	}
	tmp = '\0';
	return(tmp);
}


int main()
{
	char s1[] = "Hello Bitches";

	char *tmp;

	tmp = strdup(s1);

	printf("the new string: %s\n", tmp);

	char *tmp_two;

	tmp_two = strdup(s1);

	printf("my function new string: %s\n", tmp_two);
	free(tmp);
	free(tmp_two);
}
