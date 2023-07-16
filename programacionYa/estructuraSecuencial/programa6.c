/*
    Programa 6: Realizar un programa que lea cuatro valores numericos e informar su suma y promedio
*/
#include <stdio.h>
int main()
{
    //Declaramos las variables
    int num1,num2,num3,num4,suma,promedio;
    //Solicitamos los datos al usuario
    printf("Favor ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("Favor ingrese el segundo numero: ");
    scanf("%d",&num2);
    printf("Favor ingrese el tercer numero: ");
    scanf("%d",&num3);
    printf("Favor ingrese el cuarto numero: ");
    scanf("%d",&num4);

    //Ahora vamos a calcular la suma y luego el promedio
    suma = num1 + num2 + num3 + num4;
    promedio = suma / 4;

    //Ahora mostramos por pantalla el resultado de la suma y promedio
    printf("El valor de la suma de los cuatro numeros es: %d\n",suma);
    printf("El valor del promedio es: %d\n",promedio);



    return 0;
}