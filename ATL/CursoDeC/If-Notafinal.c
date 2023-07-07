/*
Realice un programa que determine cual es la nota final de un alumno en una materia teniendo en cuenta que la nota final es el promedio de 2 examenes.(obtener el promedio de los 2 examenes)
*/
#include <stdio.h>
int main()
{
    float examen1, examen2;
    printf("Ingrese la nota del primer examen: \n");
    scanf("%f",&examen1);
    printf("Ingrese la nota del segundo examen:\n");
    scanf("%f",&examen2);

    float notaFinal;
    notaFinal = (examen1 + examen2)/2;
    printf("Primer examen: %.2f\n",examen1);
    printf("Segundo examen: %.2f\n",examen2);
    printf("La nota final es: %.2f\n",notaFinal);


    return 0;
}