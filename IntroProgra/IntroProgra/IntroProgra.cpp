#include <stdio.h>

int main()
{
	/*sumar dos numeros, estos numeros pedirlos por teclado*/ 
	
	int iDato1;
	int iDato2;
	int iResultado;

	printf("\n ---- SUMA DE DATOS [DOS DATOS] ----\n");
	printf("Ingresa tu primer numero: ");
	scanf_s("%i", &iDato1);
	printf("Ingresa tu segundo numero: ");
	scanf_s("%i", &iDato2);

	iResultado = iDato1 + iDato2;

	printf("El resultado es: %i", iResultado);



}
