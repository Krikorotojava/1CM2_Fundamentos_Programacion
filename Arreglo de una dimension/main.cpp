#include<stdio.h>
main(){
    int i,arreglo[10];
    for(i=0; i<7;i++){
        printf("(★≧▽^))★☆Dame un numero%d: \n ",i+1);
        scanf("%d",&arreglo[i]);
    }
    printf("\n\n彡ﾟ◉ω◉ )つー☆* Tu numero quedo:\n\n");
    for(i=0; i<7;i++){
        printf("%d",arreglo[i]);
    }
  
}
