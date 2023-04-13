#include <stdio.h>
/*
    Fuera del int main estan las variables globales, siempre antes del main

*/
int var = 5; // Esta es una variable global

//Creamos la funcion numero
int mostrar_numero()
{
    int var1 = 2, var2; //Aqui definimos a las variables de la funcion
    var2 = var1 + var;
    printf("El valor de mi variable global2 es %d\n",var2);

}

int main()
{
    int var1 = 2, var2; //Aqui definimos variables locales
    var2 = var1 + var;
    printf("El valor de mi variable global1 es %d\n",var);
    //Al indicar %d le estoy indicando que es un tipo de dato entero
    
    //Aqui vamos a llamar a la funcion mostrar_numero();
    mostrar_numero();

    return 0;
}