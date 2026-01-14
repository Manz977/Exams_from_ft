


#include <unistd.h>


int ft_strlen(char const *str)
{
	int len;
	len = 0;
	while(str[len])
	len++;
	return(len);
}

int main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	const char *s1 = argv[1];
	const char *s2 = argv[1];
	int i = 0;
	int j = 0;

	int len = ft_strlen(s1);

	while(s1[i] && s2[j])
	{
		if(s1[i] == s2[j])
		{
			i++;
		}
		j++;
	}
	if(s1[i] == '\0')
	{
		while (s1[i] < len)
		{
			write(1, s1, len);
			s1++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
