#include <stdio.h>
int main (){
    int numA = 21;
    int numB = 22;
    int * num_ptr1, *num_ptr2;
    num_ptr1 = &numA;
    num_ptr2 = num_ptr1;
    *num_ptr2 = 33;
    numB = *num_ptr2;
 
    
     return 0;
}