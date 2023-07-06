/*
    Ejemplo2.- Definicion de variables
    * Declaracion de variable: tipoNombre [ =valor]
    * Asignacion: variable = expresion
    * 
    * Ejemplo 2.- Multiplica dos numeros enteros y muestra el resultado por pantalla
*/

#include <stdio.h>

int main()
{
    //Declaramos las variables
    int multiplicador; //Se define multiplicador como un entero
    int multiplicando; //Se define multiplicando como un entero
    int res; //Se define resultado como un entero

    //Asignamos valores a las variables
    multiplicador =  1000; //Se asignan valores
    multiplicando = 2;
    res = multiplicador * multiplicando;
    printf("Resultado = %d\n",res);
    return 0;
}