/*
    Realizar la  carga del lado de un cuadrado, mostrar por pantalla el perimetro del mismo(El perimetro de un cuadrado se calcula multiplicando el valor del lado por cuatro)
*/
#include <stdio.h>
#include <curses.h>

int main()
{
    //Declaramos la variable
    int lado;
    int perimetro;
    //Solicitamos los datos al usuario
    printf("Favor ingresar el valor del lado del cuadarado: ");
    //Ahora ingresamos los datos solicitados
    scanf("%i",&lado);
    //Ahora realizamos la operacion para calcular el perimetro
    perimetro = lado * 4;


    //Ahora mostramos por consola el valor
    printf("El valor del perimetro del cuadrado es: %i\n",perimetro);

    getchar();

    return 0;
}
