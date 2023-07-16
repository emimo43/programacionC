/*
    Programa 4: Realiza la carga del lado de un cuadrado, mostrar por pantalla el perimetro del mismo (El perimetro de un cuadrado se calcula multiplicando el valor del lado por cuatro)
*/
#include <stdio.h>
int main()
{
    //Declaramos las variables
    int lado, perimetro;
    //Solicitamos los datos al usuario
    printf("Favor ingrese el valor del lado del cuadrado: ");
    //Ingresamos los datos por teclado
    scanf("%d",&lado);

    //Realizamos la operacion del calculo del perimetro
    perimetro = lado * 4;

    //Ahora mostramos por pantalla el valor del resultado
    printf("El valor del perimetro del cuadrado es: %d\n",perimetro);


    return 0;
}