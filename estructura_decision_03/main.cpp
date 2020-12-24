//decision doble if-else
#include<stdio.h>
int main(){
    float calif;
    printf("Da la calificacion de tu examen: ");
    scanf("%f",&calif);
    if(calif >= 6)
        printf("Has sido aceptado!! :)");
    else
        printf("No has sido aceptado!! :(");
    return 0;
}
