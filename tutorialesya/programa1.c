#include <stdio.h>

/*
Programa para calcular el sueldo de un operario conociendo la cantidad de horas trabajadas y el costo por hora.
*/

int main()
{
    //Declaramos las variables
    int horasTrabajadas;
    float costoHora;
    float sueldo;

    //Solicitamos los datos al usuario
    printf("Ingrese las horas trabajadas por el empleado:\n");
    //Ahora ingresamos por teclado los datos solicitados
    scanf("%i",&horasTrabajadas); //Con la funcion scanf ingresamos los datos por teclado
    printf("Ingrese el pago por hora:\n");
    scanf("%f",&costoHora);

    //Ahora calculamos el sueldo del operario
    sueldo = horasTrabajadas * costoHora;
    //Ahora mostramos por pantalla el resultado del sueldo
    printf("El sueldo total del operario es:\n");
    printf("%f\n",sueldo);
    getchar();//Detiene la ejecucion hasta que apretemos una tecla
    return 0;//Indicamos al SO que el programa finalizo correctamente
}