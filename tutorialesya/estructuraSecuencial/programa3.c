/*
Realizar la carga de dos numeros enteros por teclado e imprimir su suma y su producto
*/
#include <stdio.h>
#include <curses.h>
int main()
{
    //Declaramos las variables
    int num1,num2,suma,producto;
    //Solicitamos los datos al usuario
    printf("Ingrese primer valor:\n");
    scanf("%i", &num1);
    printf("Favor ingresar el segundo valor:\n");
    scanf("%i", &num2);

    //Ahora realizamos las operaciones
    producto = num1 * num2;
    suma = num1 + num2;

    //Ahora mostramos por consola los resultados
    printf("La suma de los dos valores es:\n");
    printf("%i",suma);
    printf("\n");
    printf("El producto de los dos valores es:\n");
    printf("%i",producto);
    printf("\n");

    getchar();//Detenemos el programa, esta funcion esta relacionada con #include <curses.h> aunque funciona sin esta funcion, getch() no funciona en linux



    return 0;
}