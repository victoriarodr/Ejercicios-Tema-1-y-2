/*
 Victoria Rodriguez DIV D
 Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
 caso de que no exista también informarlo.
 Ejemplo:
 1 5 3 el 3 es del medio
 5 1 5 no hay número del medio
 3 5 1 el 3 es del medio
 3 1 5 el 3 es del medio
 5 3 1 el 3 es del medio
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Ingrese un número");
	scanf("%d", &numeroUno);

	printf("Ingrese un número");
	scanf("%d", &numeroDos);

	printf("Ingrese un número");
	scanf("%d", &numeroTres);

	if((numeroUno < numeroDos && numeroUno > numeroTres)||(numeroUno > numeroDos && numeroUno < numeroTres))
	{
		printf("El numero del medio es: %d", numeroUno);
	}
	else
	{
		if((numeroDos < numeroUno && numeroDos > numeroTres)||(numeroDos > numeroUno && numeroDos < numeroTres))
		{
			printf("El numero del medio es: %d", numeroDos);
		}
		else
		{
			if((numeroTres < numeroUno && numeroTres > numeroDos)||(numeroTres > numeroUno && numeroTres < numeroDos))
			{
				printf("El numero del medio es: %d", numeroTres);
			}
			else
			{
				printf("No hay número del medio");
			}
		}
	}

	return EXIT_SUCCESS;
}

