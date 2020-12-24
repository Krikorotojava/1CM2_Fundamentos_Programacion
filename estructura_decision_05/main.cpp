//Decision multiple switch
#include<stdio.h>
int main(){
    int opcion;
    float a, b, resultado;
    printf("da el primer numero \n");
    scanf("%f",&a);
    printf("Da el segundo numero \n");
    scanf("%f",&b);
    //////////////////////////////////////////////////////////////////////
    printf("\t que deseas realizar? \n");
    printf("1.suma");
    printf("2.resta");
    printf("3.Multiplicacion");
    scanf("%d", &opcion);
    /////////////////////////////////////////////////////////////////////
    switch(opcion){
        case 1: resultado = a + b;
        break;
        case 2: resultado = a - b;
        break;
        case 3: resultado = a*b;
        default:
            printf("opcion no valida");
    }
    ////////////////////////////////////////////////////////////////////////////
    printf("\t resultado: %f",resultado);
    return 0;
}