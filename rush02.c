#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char a);

void	ft_ejex(int x)
{
	int cont;

	cont = 2;
	ft_putchar ('A');
	while (cont < x)
	{
		ft_putchar('B');
		cont++;
	}
	if (x >= 2)
		ft_putchar ('A');
	ft_putchar('\n');
}

void	ft_ejex2(int x)
{
	int cont;

	cont = 2;
	ft_putchar ('C');
	while (cont < x)
	{
		ft_putchar('B');
		cont++;
	}
	if (x >= 2)
		ft_putchar ('C');
	ft_putchar('\n');
}

void	ft_ejey(int x, int y)
{
	int cont;

	cont = 2;
		ft_putchar ('B');
		while (cont < x)
		{
			ft_putchar(' ');
			cont++;
		}
		if (x >= 2)
			ft_putchar ('B');
		ft_putchar('\n');
		y--;
}

void rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_ejex(x);
		while (y > 2)
		{
			ft_ejey(x, y);
			y--;
		}
		if (y >= 2)
			ft_ejex2(x);
	}
}