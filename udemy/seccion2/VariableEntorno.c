#include <stdio.h>

/*
Definimos variables globales y locales
*/

int edad = 20; //Esta es una variable global

int main()
{
    printf("El valor de la variable edad es: %d\n",edad); //Aqui mostramos la variable global en esta impresion

    //Generamos un nuevo bloque de codigo
    {
        int edad = 40;
        printf("El valor de la variable edad es: %d\n",edad); //En esta impresion por consola mostramos la variable de este bloque de codigo o sea la variable local
    }
    printf("El valor de la variable edad es: %d\n",edad); //Aqui nuevamente imprimimos la variable global

    return 0;
}