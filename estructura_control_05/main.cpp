#include<stdio.h>
int main(){
    char op;
    float num1 = 0;
    float num2 = 0;
    printf("\calculadora basica \n\n");
    printf("ingrese; numero operador numero\n");
    scanf("%f %c %f",&num1, &op, &num2);
    if(op == '+'){
        printf("= %f",num1 + num2);
    } else if(op == '-'){
        printf("= %f", num1 - num2);
    } else if (op == '*'){
        printf(" ==%f",num1 * num2);
    } else if(op == '/'){
        printf("=%f",num1/num2);
    } else{
        printf("\n Lo sentimos operacion desconocida");
    }
    return 0;
}