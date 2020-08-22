#include <stdio.h>
int main(){
    printf("\n\n\t Basic Pointer \n\n");
    int a=2;
    int *b;
    b=&a;
    printf("Address of the variable is: %x \n", &a);
    printf("Address stored in pointer variable a is: %x \n", b);
    printf("\n\nValue of var variable or the value stored at address b is   %d ", *b);
    printf("\n\n\t End of Program. ");
}
