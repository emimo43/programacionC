/*
    Escriba un programa en el que se pida ingresar numeros entre 1 y 7. Segun el numero elegido va a representar un dia de la semana
*/
#include <stdio.h>
int main()
{
    int dia;
    printf("Igrese un numero (el num representa un dia): ");//Solicitamos los datos al usuario
    scanf("%d",&dia);

    //Utilizaremos la funcion switch
    switch (dia)
    {
    case 1:
        printf("Hoy es dia LUNES\n");
        break;
    case 2:
        printf("Hoy es dia MARTES\n");
        break;
    case 3:
        printf("Hoy es dia MIERCOLES\n");
        break;
    case 4:
        printf("Hoy es dia JUEVES\n"); 
        break;   
    case 5:
        printf("Hoy es dia VIERNES\n");
        break;
    case 6:
        printf("Hoy es dia SABADO\n");
        break;
    //case 7:
        //printf("Hoy es dia VIERNES");    
    
    
    default:
        printf("Hoy es DOMINGO\n");
        break;
    }

    return 0;
}