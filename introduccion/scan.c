//Aqui veremos la funcion scanf
#include <stdio.h>
/*
    Funciones de entrada y salida
*/

int main()
{
    //Declaramos las variables
    int precio;
    float iva;

    //Ahora solicitamos los datos al usuario y ademas los ingresamos
    printf("Por favor introduce el precio del producto: ");
    scanf("%d",&precio);
    printf("Introduce la tasa del IVA: ");
    scanf("%f",&iva);

    printf("El precio del producto mas el impuesto es: %.2f\n",precio*(1+iva));//Al indicar %.2f le estoy indicando a C, que me indique solo dos decimales


    return 0;
}