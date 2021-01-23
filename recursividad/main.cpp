#include<stdio.h>
#include<stdlib.h>
int main (void){
    int n, x;
    printf("El palo inicial A es el palo o \n");
    printf("El palo final C es el palo1 \n");
    printf("El palo auxiliar B es el palo2\n\n");
    printf("Cuantos discos son?");
    scanf("%d", &n);
    puts("\n\n");
    for(x=1;x<(1<<n); x++)
        printf("Mueve desde el palo %i al palo %i.\n", (x&x-1)%3, ((x|x-1)+1)%3);
    system("pause");
}