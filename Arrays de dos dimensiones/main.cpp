#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int opcion;
    char nombre[3][30];
    for(int i=0; i<3; i++){
        printf("Hola,cual es tu nombre? （●＞ω＜●）");
        gets(nombre[i]);
    }
    for(int i=0; i<3; i++){
        printf("%s\n",nombre[i]);
    }
    return 0;
}
