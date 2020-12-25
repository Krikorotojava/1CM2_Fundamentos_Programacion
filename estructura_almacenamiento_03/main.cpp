#include<stdio.h>
int main(){
    int sizeA;
    printf("tamaño de arreglo\n");
    scanf("%i",&sizeA);
    int age[sizeA];
    for(int i = 0;i < sizeA;i++){
        printf("ingresa el valor %i\n",i+1);
        scanf("%i", &age[i]);
    }
    printf("los valores del arreglo son:\n");
    for(int i=0; i < sizeA;i++){
        printf("%i-", age[i]);
    }
    printf("\n");
    return 0;
}