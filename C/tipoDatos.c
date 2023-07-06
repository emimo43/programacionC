#include <stdio.h>
/*
	Tipos de datos basicos en C
*/


int main() 
{
	//Tipo entero (formato %d, %i)
	int entero = 10;
	printf("Tipo entero: %i\n", entero);
	
	//Tipo flotante (formato %f)
	float flotante = 3800.5;
	printf("Tipo flotante: %1.2f\n",flotante);

	//Tipo double (formato %lf -> long float)
	double doble = 15.4;
	printf("Tipo doble: %.2lf\n",doble);

	//Tipo char (formato %c)
	char caracter = 'A';
	printf("Tipo caracter: %c\n", caracter);
	printf("Valor decimal: %d\n", caracter);
	char caracterDecimal = 65;
	printf("Tipo caracter decimal: %c\n",caracterDecimal);//Imprime el valor de la tabla ASCII
	
	return 0;
}

