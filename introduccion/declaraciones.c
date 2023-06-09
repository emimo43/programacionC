#include <stdio.h>

int main()
{
    //#define NOMBRE valor; --> constantes
    //TipoDato Nombre = valor; --> variables

    float sueldo = 25.456;
    float bono = 4.560;
    sueldo += bono; //sueldo = sueldo + bono
    printf("%f\n",sueldo);

    return 0;
}