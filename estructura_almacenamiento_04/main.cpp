#include<stdio.h>
int main(){
    int tabla[3][4];//={{0, 3, 4, 10},{3, 1, -10, 10},{10, 100, 3, 1}};
    printf("ingrese valores para la tabla de 3 x 4\n\n");
    for (int i= 0; i < 3;i++){
        for(int j = 0; j < 4; j++){
            printf("elemento [%d, %d]: ", i, j);
            scanf("%d", &tabla[i][j]);
        }
    } 
    printf("\n\nElementos almacenados en la tabla :\n\n");
      for (int i= 0; i < 3;i++){
        for(int j = 0; j < 4; j++){
  printf("%d ", &tabla[i][j]);
        }
        printf("\n");
    } 
    printf("\n\n");
    return 0;
}
