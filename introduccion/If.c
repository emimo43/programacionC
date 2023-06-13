//Al introducir la edad de una persona, saber si es mayor de edad
#include <stdio.h>

int main()
{
    //Declaramos la variable
    int edad; //No le asignamos valor todavia
    //Solicitamos los datos al usuario
    printf("Ingrese su edad: ");
    scanf("%d",&edad);

    if(edad >= 18)
    {
        printf("Es mayor de edad\n");
    }

    return 0;
}