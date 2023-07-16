/*
    Realice ua calculadora de Indice de Masa Corporal(IMC)
    Tener en cuenta

    IMC = peso/ (altura * altura)

    IMC <18.5 --> Peso por debajo de lo normal
    IMC 18.5 - 25 --> Peso saludable
    IMC 25 - 30 --> Sobrepeso
    IMC >=30 --> Obesidad

*/
#include <stdio.h>
int main()
{
    //Ingresamos los datos solicitados por el usuario
    float peso,altura,imc;
    printf("Ingrese su peso(KG): ");
    scanf("%f",&peso);
    printf("Ingrese su altura(m): ");
    scanf("%f",&altura);

    //Ahora realizamos el calculo del IMC
    imc = peso / (altura * altura);

    //Ahora para obtener los rangos y sus valores ocuparemos la condicion IF
    if(imc < 18.5)//Si el IMC es menor que 18.5
    {
        printf("EL peso esta debajo de lo normal\n");

    }else if((imc >= 18.5) && (imc < 25))//SI el imc es mayor o igual a 18.5 y menor a 25
    {
        printf("El peso es saludable\n");
    }else if((imc >= 25) && (imc < 30))
    {
        printf("La persona tiene sobrepeso\n");

    }else if(imc >= 30)
    {
        printf("Tiene obesidad");
    }
    printf("Su IMC es: %.2f\n",imc);

    return 0;
}