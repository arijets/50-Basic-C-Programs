#include<stdio.h>
int main(){
    printf("\n\n\t Pointer to pointer \n\n");
    int a=5;
    int *b;
    int **c;
    b = &a;
    c = &b;
    printf("Value of a = %d", a);
    printf("\nValue available at *ptr = %d", *b);
    printf("\nValue available at **pptr = %d", **c);
    printf("\n\n\t End of Program. ");
}
