#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char a);		//No he probado la Norminette con ningun codigo. Son todos practicamente iguales

void	ft_ejex(int x)
{
	int cont;

	cont = 2;
	ft_putchar ('o');			//El primer caracter que imprime siempre es una 'o'
	while (cont < x)			//El contador para saber cuantas '-' hay que imprimir
	{							//cont empieza en 2 porque es el numero de caracteres distintos de '-'
		ft_putchar('-');
		cont++;
	}
	if (x >= 2)					//Este if sirve para que en caso de que la y sea menor que 2 no falle
		ft_putchar ('o');
	ft_putchar('\n');
}

void	ft_ejey(int x, int y)	//el eje y es lo que hay entre la primera y ultima fila, el codigo es exactamente igual
{
	int cont;

	cont = 2;
		ft_putchar ('|');
		while (cont < x)
		{
			ft_putchar(' ');
			cont++;
		}
		if (x >= 2)
			ft_putchar ('|');
		ft_putchar('\n');
		y--;
}

void rush(int x, int y)
{
	if (x > 0 && y > 0)		//si se dan numeros negativos o 0 no imprime nada
	{
		ft_ejex(x);			//imprime la primera linea
		while (y > 2)		//imprime todas las lineas intermedias necesarias, el 2 es porque hay que restar
		{					// la cantidad delineas diferentes, en este caso la primera y la ultima
			ft_ejey(x, y);	
			y--;
		}
		if (y >= 2)			//imprime la ultima linea igual que la primera si hay mas de dos lineas, para que no de error
			ft_ejex(x);
	}
}