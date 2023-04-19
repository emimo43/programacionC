/*
    Escribir un programa en el cual se ingresen cuatro numeros. Calcular en informar la suma de los dos primeros y el producto del tercero y el cuarto.
*/
#include <stdio.h>
#include <curses.h>

int main()
{
    //Declaramos las variables
    int num1, num2, num3, num4, suma, producto;

    //Solicitamos los datos al usuario
    printf("Favor ingresar el primer numero:\n");
    //Ingresamos los datos solicitados
    scanf("%i",&num1);
    printf("Favor ingresar el segundo numero:\n");
    scanf("%i",&num2);
    printf("Favor ingresar el tercer numero:\n");
    scanf("%i",&num3);
    printf("Favor ingresar el cuarto numero:\n");
    scanf("%i",&num4);

    //Ahora realizamos la operacion de la suma y multiplicacion
    suma = num1 + num2;
    producto = num3 * num4;

    //Ahora mostramos por consola el resultado de ambas operaciones
    printf("El valor de la suma es: %i\n",suma);
    printf("El valor de la multiplicacion es: %i\n",producto);

    getchar();

    return 0;
}