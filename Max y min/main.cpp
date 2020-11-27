#include<stdio.h>
int main(){
    int r,m,z,max,min;
    printf("digite el valor de r: ");
    scanf("%i",&r);
    printf("digite el valor de m: ");
    scanf("%i",&m);
    printf("digite el valor de z: ");
    scanf("%i",&z);
    if(r>m){
        if(r>z){
            max=r;
        }
        else{
            max=z;
        }
    }
    else{
        if(m>z){
            max=m;
        }
        else{
            max=z;
        }}
    if(r<m){
        if(r<z){
            min=r;}
        else{
            min=z;
        }
    }
    else{
        if(m<z){
            min=m;
        }
        else{
            min=z;
        }
    }
printf("el mayor de los 3 numero es: %i.\n",max);
printf("el menor de los 3 numero es: %i.\n",min);

return 0;
}



