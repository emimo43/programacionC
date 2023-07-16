/*
    Programa 5: Escribir un programa en el cual se ingresen cuatro numeros, calcular e informar la suma de los dos primeros y el producto del tercero y cuarto

*/
#include <stdio.h>
int main()
{
    //Declaramos las variable
    int num1,num2,num3,num4,suma,producto;
    //Solicitamos los datos al usuario
    printf("Favor ingresar el primer numero: ");
    scanf("%d",&num1);
    printf("Favor ingresar el segundo numero: ");
    scanf("%d",&num2);
    printf("Favor ingresar el tercer numero: ");
    scanf("%d",&num3);
    printf("Favor ingrese el cuarto numero: ");
    scanf("%d",&num4);    

    //Ahora generamos las operaciones
    suma = num1 + num2;
    producto = num3 * num4;

    //Ahora mostramos los resultados de las operaciones
    printf("La suma de los primeros numeros es: %d\n",suma);
    printf("La multiplicacion del tercer y cuarto numero es: %d\n",producto);


    return 0;
}