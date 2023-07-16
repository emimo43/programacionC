/*
    Escriba un programa en el que se pida ingresar una letra y nos diga si es vocal o consonante
*/
#include <stdio.h>
int main()
{
    //definimos la variable de tipo char
    char letra;//Variable de tipo caracter
    //Solicitamos los datos al usuario
    printf("Favor ingrese una letra: ");
    scanf("%c",&letra);

    //Usaremos la funcion switch para este caso
    switch (letra)
    {
    case 'a':
        printf("Es una vocal\n");
        break;
    case 'e':
        printf("Es una vocal\n");
        break;
    case 'i':
        printf("Es una vocal\n");
        break;
    case 'o':
        printf("Es una vocal\n");
        break;
    case 'u':
        printf("Es una vocal\n");
        break;
        
    
    default:
        printf("Es una consonante\n");
        break;
    }


    return 0;
}