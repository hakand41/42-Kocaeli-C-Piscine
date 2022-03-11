#include <unistd.h>

void	ft_putchar(char c)
	{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	right;
	int	down;

	down = 1;
	while (down <= y && x > 0)
	{
		right = 1;
		while (right <= x)
		{
			if ((right == 1 && down == 1) || (right == 1 && down == y))
				ft_putchar('A');
			else if ((right == x && down == 1) || (right == x && down == y))
				ft_putchar('C');
			else if ((right == 1) || (right == x) || (down == 1) || (down == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			right++;
		}
		ft_putchar('\n');
		down++;
	}
}

int	main(void)
{
	rush(4, 4);
	return (0);
}
