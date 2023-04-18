#include <stdio.h>
/* 
Programa 2: Hallar la superficie de un cuadrado conociendo el valor de un lado
*/ 

int main()
{
    int lado;
    int superficie;

    //Solicitamos los datos al usuario
    printf("Ingrese el valor del lado del cuadrado: ");
    scanf("%i", &lado);//Ingresamos los datos del usuario por teclado

    superficie = lado * lado; //Realizamos la operacion matematica
    //Vamos a mostrar por consola lo solicitado
    printf("La superficie del cuadrado es:");
    printf("\n%i\n",superficie);

    return 0;
}