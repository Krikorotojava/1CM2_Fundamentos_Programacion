#include<stdio.h>
//#include<conio.h>
#include<math.h>

int main(){
    float potencia, numero;
    printf("Escribe un numero a elevar la raiz cuadrada: ");
    scanf("%f",&potencia);
  
    potencia=pow(potencia,.5);
    printf("resultado: %.2f",potencia);
    //getch();
    return 0;
   
}


