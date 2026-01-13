

#include <unistd.h>


int main(int argc, char **argv)
{
	int i = 0;
	int end = 0;
	if(argc != 2 || argv[1][0] == '\0')
	{
		write(1, "\n", 1);
		return 0;
	}

	while(argv[1][i])
		i++;
	i--;

	while(i >= 0 && argv[1][i] == ' ')
	{
		i--;
	}
	end = i;

	while (i >= 0 && argv[1][i] != ' ')
	{
		i--;
	}
	i++;

	while (i<= end)
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
