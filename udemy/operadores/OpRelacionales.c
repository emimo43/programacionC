//En esta clase veremos los operadores relacionales en C
#include <stdio.h>

int main()
{
    //Declaramos las variables
    int a,b,c;
    a = 10;
    b = 10;
    c = (a >= b); //Aqui estamos consultando si a es mayor o igual que b, en el caso de ser igual nos entrega un 1 y si es falso un 0
    printf("a es mayor o igual que b: %d\n",c);

    return 0;
}