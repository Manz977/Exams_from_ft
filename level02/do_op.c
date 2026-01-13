

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}

	int first_arg;
	int third_arg;

	first_arg = atoi(argv[1]);
	third_arg = atoi(argv[3]);

	if(argv[2][0] == '+')
	{
		printf("%d", first_arg + third_arg);
	} else if (argv[2][0] == '-')
	{
		printf("%d", first_arg - third_arg);
	} else if (argv[2][0] == '*')
	{
		printf("%d", first_arg * third_arg);
	} else if (argv[2][0] == '/')
	{
		printf("%d", first_arg / third_arg);
	} else if (argv[2][0] == '%')
	{
		printf("%d", first_arg % third_arg);
	}
	printf("\n");
}
