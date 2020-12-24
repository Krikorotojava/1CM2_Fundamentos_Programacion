#include<stdio.h>
int main(){
    int arreglo[6] = {1, -10, 0, -1, 20, 100};
    int * apArray = arreglo;
    apArray++;
    printf("contenido de la direccion de memoria apuntada por apArray: %d", *apArray);
    apArray += 4;
    printf("\n\ncontenido de la direccion de memoria apuntada por apArray: %d", *apArray);
    apArray -= 5;
    printf("\n\ncontenido de la direccion de memoria apuntada por apArray: %d", *apArray);
    printf("\n\n");
    return 0;
}