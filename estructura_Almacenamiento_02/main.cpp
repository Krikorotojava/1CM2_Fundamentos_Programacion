#include<stdio.h>
struct persona{
    char nombre[20];
    int edad;
}persona[3];
int main(){
    int i;
    for(i=0; i<3; i++){
        fflush(stdin);
        printf("Introduzca nombre persona %i",i);
        gets(persona[i].nombre);
        printf("Introduzca la edad de persona %i\n",i);
        scanf("%i",&persona[i].edad);
        printf("\n");
    }
     for(i=0; i<3; i++){
        printf("El nombre de la persona %i es %s",i,persona[i].nombre);
        printf("La edad de la persona %i es %i\n",i,persona[i].edad);
    }
    return 0;
}