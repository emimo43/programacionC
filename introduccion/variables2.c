//Aqui veremos variables
#include <stdio.h>

int main()
{
    //Declaramos una variable, no le asignaremos un valor
    int a;
    printf("Digite un valor: ");//Aqui estamos solicitando datos al usuario
    scanf("%d",&a);//Aqui ingresamos los datos solicitados con la funcion scanf

    //Ahora mostramos por consola los datos
    printf("El valor que digito es: %d\n",a);

    return 0;
}