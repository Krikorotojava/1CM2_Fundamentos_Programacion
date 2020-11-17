#include <stdio.h>
main(){
    int tabla, numero;
    for(tabla=1; tabla<=5; tabla++)
        for(numero=1; numero<=10; numero++)
            printf("%d por %d es %d\n", tabla, numero, tabla*numero);
}
