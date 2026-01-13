






#include <string.h>
#include <stdio.h>



size_t ft_strspn(const char *s, const char *accept)
{
	size_t i;
	size_t j;

	i = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if(accept[j] == s[i])
			{
				break;
			}
			j++;
		}
		if(accept[j] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (i);
}


int main()
{
	char s1[] = "853914502ABJKTMNTY";
	char nums[] = "0128934567A";

	int length = strspn(s1, nums);

	printf("The length of the safe segment is: %d\n", length);

		int my_length = ft_strspn(s1, nums);

	printf("The length of the safe segment is: %d\n", my_length);

	return 0;
}
