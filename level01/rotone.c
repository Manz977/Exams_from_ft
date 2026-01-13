#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 122)
		{
			argv[1][i] = 'a';
		}
		else if(argv[1][i] == 90)
		{
			argv[1][i] = 'A';
		}
		else if((argv[1][i] >= 65 && argv[1][i] <= 90) || (argv[1][i] >= 97 && argv[1][i] <= 122 ))
		{
			argv[1][i] += 1;
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
