#include <stdio.h>

int main()
{
    /*Declaracion de variables */
    int a,b,c; //Aqui no le hemos asignado un valor
    a = b = c = 20; //Todas las variables valen 20, le asignamos ese valor

    printf("EL valor de las variables son: %d,%d,%d\n", a,b,c);

    a *= 10; // a = a = * 10, en el fondo es a * 10
    b += 10; // a = a = + 10 en el fondo es a + 10    
    c -= 10; // a = a = - 10 en el fondo es a -10
    printf("El valor de las variables declaradas son: %d, %d, %d\n", a,b,c);

    return 0;
}