/*
    Programa 3 V2: Realiza la carga de dos numeros enteros por teclaro e imprimir su suma y su progucto
*/
#include <stdio.h>
int main()
{
    //Declaramos las variables de tipo int
    int num1,num2,suma,producto;

    //Ahora solicitamos los datos al usuario
    printf("Favor ingrese el primer numero: ");
    scanf("%d",&num1);//Mediante este script ingresamos los datos por teclado
    printf("Favor ingrese el segundo numero: ");
    scanf("%d",&num2);

    //Ahora realizamos las operaciones correspondientes
    suma = num1 + num2;
    producto = num1 * num2;

    //Ahora mostramos por consola los resultados obtenidos
    printf("El valor de la suma de los dos numeros es: %d\n",suma);
    printf("El valor del producto de los dos numeros es: %d\n",producto);


    return 0;
}