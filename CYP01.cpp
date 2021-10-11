#include <stdio.h>

int main()
{
	int ancho, alto, C_X1, C_Y1, C_X2, C_Y2;
	float porcentaje_X, porcentaje_Y, porcentaje_ancho, porcentaje_alto;

	scanf_s("%i", &ancho);
	scanf_s("%i", &alto);
	scanf_s("%f", &porcentaje_X);
	scanf_s("%f", &porcentaje_Y);
	scanf_s("%f", &porcentaje_ancho);
	scanf_s("%f", &porcentaje_alto);

	C_X1 = ancho * porcentaje_X;
	C_Y1 = alto * porcentaje_Y; 
	C_X2 = C_X1 + ancho * porcentaje_ancho;
	C_Y2 = C_Y1 + alto * porcentaje_alto;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, alto, porcentaje_X, porcentaje_Y, porcentaje_ancho, porcentaje_alto, C_X1, C_Y1, C_X2, C_Y2);

	return 0;
}
