// decision simple
#include<stdio.h>
int main(){
    int calificacion;
    printf("Teclee su calificacion\n");
    scanf("%d",&calificacion);
    if(calificacion>5){
        printf("Aprobado");
    }
    if(calificacion<5){
        printf("reprobado");
    }
    return 0;
}