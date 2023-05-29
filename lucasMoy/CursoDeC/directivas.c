//Directivas del procesador y variables
#include <stdio.h> //Esto es una libreria
#define PI 3.1416 //Esto es una constante o Macro

int y = 5; //Esto es una variable global se esa en todas las funciones

int main()
{
    int x = 10; //Variable local, esta dentro de la funcion

    int suma = 0;
    float suma2 = 0;

    suma = PI + x;

    printf("La suma es: %i\n",suma);
    printf("La suma es: %f\n",suma);
    printf("La suma es %.2f\n",suma);//Solo mostrara dos decimales
    printf("La suma es %.1f\n", suma);//Aqui hara el redondeo

    getchar();

    return 0;
}
