//decision en cascada
#include<stdio.h>
int main(){
    int a, b=7, c=4, resultado;
    printf("Que opcion eliges\n");
    printf("1.sumar\n2.restas\n3.multiplicar\n");
    scanf("%d",&a);
    if(a == 1){
        resultado = b +c; 
    }else{
        if(a == 2){
             resultado =b-c;
        }else{
            resultado = b*c;
        }
       
    }
    printf("El resultado es: %d",resultado);
    return 0;
}