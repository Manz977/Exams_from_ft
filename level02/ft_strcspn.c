#include <stdio.h>
#include <string.h>





size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	i = 0;

	while(s[i])
	{
		size_t j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
			{
				return i;
			}
			j++;
		}
		i++;
	}
	return i;
}

int main()
{
	char text[] = "bicycle";
	char reject[] = "le";

	int length = strcspn(text, reject);

	printf("The length of the safe segment is: %d\n", length);

		int my_length = ft_strcspn(text, reject);

	printf("The length of the safe segment is: %d\n", my_length);

	return 0;
}
