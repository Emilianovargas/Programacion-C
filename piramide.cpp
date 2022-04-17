#include <stdio.h>

int main(){

	int n;

	printf("Ingresa el tamanio de la piramide: ");
	scanf("%i",&n);

	printf("\n");
	
	int ast=1, esp=n-1;

	  	for(int ren=1; ren<=n ; ren++) // Este for se repetira el mismo numero de veces que el valor que ingresemos.
		{
		  for(int i=1; i<=esp ; i++) // Este for es para imprimir los espacios
			printf(" ");

		  for(int i=1; i<=ast ; i++) // Este for es para imprimir los asteriscos
        	printf("*");
			printf("\n");
			ast= ast+2; // Para que en el siguiente renglon imprima 2 asteriscos abajo de los de arriba.
			esp= esp-1; // Para que en el siguiente renglon imprima un espacio menos.
		}

	return 0;
}