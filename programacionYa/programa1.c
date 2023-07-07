/*
    Calculo de sueldo de un operario, conociento la cantidad de horas trabajadas y el costo por hora es:
*/
#include <stdio.h>
int main()
{
    int horasTrabajadas;
    float costoHora;
    float sueldo;

    printf("Ingrese las horas trabajadas por el empleado: ");//Solicitamos los datos al usuario
    scanf("%d",&horasTrabajadas);//Ingresamos los datos solicitados
    printf("Ingrese el pago por horas: ");
    scanf("%f",&costoHora);

    //Ahora calcularemos el sueldo que es las horas trabajadas * el costo de la hora
    sueldo = horasTrabajadas * costoHora;
    //Mostramos por pantalla las horas trabajadas y el costo por hora
    printf("Las horas trabajadas por el empleado son: %d\n",horasTrabajadas);
    printf("El costo por hora del empleado es: %.2f\n",costoHora);
    printf("El sueldo total del operario es: %.2f\n",sueldo);

    getchar();


    return 0;
}
