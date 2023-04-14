#include <stdio.h> //Cabezera del codigo
#define PI 3.1416 //Constante global

/*
    La palabra clave enum define un tipo especial llamado enumeracion. Las enumeraciones son basicamente valores integrales que tienen nombre como variables pero son objetos de solo lectura y no pueden ser modificados en tiempo de ejecucion.
*/

int main()
{
    //Declaramos la funcion enum, que es muy similar a la lista

    enum personas
    {
        carlos, //0 esto indica la posicion 0
        maria,//1
        jose,//2
        ernesto,//3
        raul//4
    }

    //Ahora creamos objetos en los cuales almacenaremos los elementosde la funcion enum
    p1,p2,p3,p4,p5;
    p1 = carlos;
    p2 = maria;
    p3 = jose;
    p4 = ernesto;
    p5 = raul;

    //Ahora vamos a imprimir la persona 1 p1
    printf("%d\n",p5);//E este caso nos mostrara que esta en la posicion 4

    /*const int edad = 20;
    printf("El valor de edad es: %d\n",edad);
    printf("EL valor de PI es %f\n",PI);*/
    return 0;
}