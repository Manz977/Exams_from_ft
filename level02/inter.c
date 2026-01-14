#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return 0;
	}

	int i;
	int j;
	int k;
	int found;

	i = 0;

	while(argv[1][i])
	{

		k = 0;
		found = 0;
		while (k < i)
		{
			if(argv[1][i] == argv[1][k])
			{
				found = 1;
				break;
			}
			k++;
		}
		if(found == 0)
		{
				j = 0;
			while(argv[2][j])
			{
				if(argv[1][i] == argv[2][j])
				{
					write(1, &argv[2][j], 1);
					break;
				}
				j++;
			}
		}
	i++;
	}
write(1, "\n", 1);
return 0;
}
