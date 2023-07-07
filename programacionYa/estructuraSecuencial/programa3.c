/*
    Programa 3: Realizar la carga de dos numeros enteros por teclaro e imprimir su suma y producto
*/
#include <stdio.h>
int main()
{
    int num1, num2, suma, producto;//Declaramos dos variables de tipo entero

    //Solicitaremos los datos al usuario
    printf("Favor ingrese el primer numero: ");
    //Ingresamos los datos por teclado
    scanf("%d",&num1);
    printf("Favor ingrese el segundo numero: ");
    scanf("%d",&num2);
    //Ahora realizamos la operacion de suma y multiplicacion
    suma = num1 + num2;
    producto = num1 * num2;

    //Ahora mostramos por consola los resultados solicitados
    printf("El resultado de la suma de los numeros es: %d\n",suma);
    printf("El resultado de la multiplicacion de los numeros es: %d\n",producto);

    getchar();



    return 0;
}