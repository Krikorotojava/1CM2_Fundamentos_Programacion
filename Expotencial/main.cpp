#include<stdio.h>
//#include<conio.h>
#include<math.h>

int main(){
    float potencia, numero;
    printf("Escribe un numero a elevar: ");
    scanf("%f",&potencia);
    printf("A que potencia lo elevaras: ");
    scanf("%f", &numero);
    potencia=pow(potencia,numero);
    printf("resultado: %.2f",potencia);
    //getch();
    return 0;
    
}