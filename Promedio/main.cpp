 
#include <stdio.h>
int main (){
    int i, n;
    float suma, aux;
    printf("Ingrese numero total de datos: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("ingrese el dato %d:",(i+1));
        scanf("%f",&aux);
        suma+=aux;
        }
    printf("El promedio es: %g", (suma/n));
    return 0;
}
