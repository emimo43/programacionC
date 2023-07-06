/*
    Ejemplo 3.- Definicion de variables.
    Multiplica dos numeros enteros y muestra el resultado (Utiliza definicion multiple de variables)
*/

#include <stdio.h>

int main()
{
    int multiplicador, multiplicando; //Se definen dos variables

    //Asignamos los valores a las variables
    multiplicador = 1000; //Se le asigna valor
    multiplicando = 2;

    //Mostramos por consola
    printf("Resultado = %d\n", multiplicador * multiplicando);
    //Se muestra el resultado por pantalla


    return 0;
}