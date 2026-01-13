
#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int position;
	i = 0;

	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while(argv[1][i] != '\0')
	{
		if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			position = 219 - argv[1][i];
			argv[1][i] = position;
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			position = 155 - argv[1][i];
			argv[1][i] = position;
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
