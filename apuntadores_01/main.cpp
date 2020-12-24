#include<stdio.h>
int main(){
    int var1 = 10;
    int * apuntero = &var1;
    printf("Valor de var1: %d", var1);
    *apuntero = 10;
    printf("\n\n");
    return 0;
}


