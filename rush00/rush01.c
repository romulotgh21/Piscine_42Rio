#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int x, char schar, char mchar, char echar)
{
	ft_putchar(schar);
	while ((x - 1) > 1)
	{
		ft_putchar(mchar);
		x--;
	}
	if (x > 1)
		ft_putchar(echar);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_char(x, 47, '*', 92);
		y--;
		while (y > 1)
		{
			print_char(x, '*', ' ', '*');
			y--;
		}
		if (y > 0)
			print_char(x, 92, '*', '/');
	}
}
