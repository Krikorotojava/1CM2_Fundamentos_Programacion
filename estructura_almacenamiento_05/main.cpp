#include<stdio.h>
int main(){
    float calificaciones[5];
    float promedio = 0;
    printf("Programa que calcula promedio de 5 calificaciones.. \n");
    for(int i = 0; i <5 ; i++){
        printf("Dame la calificaciones %d: ", i + 1);
        scanf("%f", &calificaciones[i]);
        promedio += calificaciones[i];
        printf("\n");
    }
    printf("El promedio de las calificaciones es: %.2f\n\n", promedio / 5);
    return 0;
}