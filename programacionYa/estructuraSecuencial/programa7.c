/*
    Programa 7: Se debe desarrollar un programa que pida el ingreso del precio de un articulo y la cantidad que lleva el cliente. Mostrar lo que debe abonar el comprador.
    Definir una variable float para el precio del articulo
*/
#include <stdio.h>
int main()
{
    //Definimos las variables
    float precio,precioTotal;
    int cantidad;

    //Ingresamos los datos solicitador al usuario
    printf("Favor ingresar el precio del articulo: ");
    scanf("%f",&precio);
    printf("Favor ingrese la cantidad de articulos a llevar: ");
    scanf("%d",&cantidad);

    //Ahora calculamos el valor total de la compra
    precioTotal = precio * cantidad;

    //Ahora mostramos por pantalla el valor total de la compra
    printf("El valor unitario del producto es: %f\n",precio);
    printf("La cantidad a llevar del articulo es: %d\n",cantidad);
    printf("El valor total de la compra es: %.2f\n",precioTotal);


    return 0;
}