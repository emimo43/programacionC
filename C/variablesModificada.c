#include <stdio.h>

int main()
{
	//1. Declarar una variable
	int miNumero;//tiene un valor basura
	printf("%d\n",miNumero);
	//2. La inicializamos
	miNumero = 10;
	//3. Imprimir variable
	//formato %d -> decimal o int
	//caracter especial \n imprime salto de linea
	printf("%d\n",miNumero);
	//4. Modificamos el valor
	miNumero = 20;//Se sobreescribe el valor de 10
	printf("%d\n",miNumero);
	
	return 0;
}

