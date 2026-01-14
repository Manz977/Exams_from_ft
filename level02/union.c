


#include <unistd.h>


int main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	int seen[256] = {0};

	int i = 0;
	int j;
	while(argv[1][i])
	{
		if(seen[(int)argv[1][i]] == 0)
		{
			write(1, &argv[1][i], 1);
			seen[(int)argv[1][i]] = 1;
		}
		i++;
	}
	j = 0;
	while(argv[2][j])
		{
			if(seen[(int)argv[2][j]] == 0)
			{
				write(1, &argv[2][j], 1);
				seen[(int)argv[2][j]] = 1;
			}
			j++;
		}
	write(1, "\n", 1);
	return(0);
}
