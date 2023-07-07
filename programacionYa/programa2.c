/*
    Programa 2: Hallar la superficie de un cuadrado conociendo el valor de un lado
*/
#include <stdio.h>
int main()
{
    int lado;
    int superficie;

    printf("Favor ingrese el valor del cuadrado: ");//SOlicitamos los datos al usuario
    scanf("%d",&lado);//Ingresamos los datos solicitados
    //Ahora calcularemos el valor de la superficie
    superficie = lado * lado;
    printf("El valor de la superficie del cuadrado es: %d\n",superficie);
    

    getchar();
    return 0;
}