/*
    Realice un programa que determine cual es la nota final de un alumno en una materia teniendo en cuenta que la nota final es el promedio de 2 examenes.(obtener el promedio de los 2 examenes)
*/
#include <stdio.h>

int main()
{
    //Declaramos las variables
    float examen1, examen2;//Variables de tipo flotante
    //Solicitamos los datos al usuario
    printf("Ingrese la nota del primer examen: ");
    //Ingresemos el dato
    scanf("%f",&examen1);
    //Solicitamos los datos al usuario
    printf("Ingrese la nota del segundo examen: ");
    //Ingresemos el dato
    scanf("%f",&examen2);

    //Declaramos la variable notaFinal
    float notaFinal;
    notaFinal = (examen1 + examen2) / 2;
    printf("Primer examen: %.2f\n",examen1);
    printf("Segundo examen: %.2f\n",examen2);
    printf("La nota final es: %.2f\n",notaFinal);//Con la notacion %.2f nos mostrara dos decimales



    return 0;
}