


#include <unistd.h>


int ft_toUpper(int c)
{
	if(c >= 'a' && c <= 'z')
		return c -= 32;
	return (0);
}

int ft_putchar(int c)
{
	return write(1, &c, 1);
}
int main(int argc, char **argv)
{
	if(argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}

	int i = 0;
	while(argv[1][i])
	{
		if (argv[1][i] == '_')
		{
			++i;
			ft_putchar(ft_toUpper(argv[1][i]));
		}
		else
		{
			ft_putchar(argv[1][i]);
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
