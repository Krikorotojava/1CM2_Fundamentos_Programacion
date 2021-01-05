#include<stdio.h>
main(){
    char a[100];
    int b;
    float c;
    //almacenamiento de datos
    printf("Hola, introduzca lo que se te pide:\n");
    printf("Nombre: \n");
    scanf("%s",&a);
    printf("\n un numero entero: ");
    scanf("%i",&b);
    printf("Un numero con decimal: \n");
    scanf("%f",&c);
    //Impresion de datos
    printf("hola %s:3",a);
    printf("Su numero entero es: %i\n",b);
    printf("tu numero decimal es : %f",c);
}