#include <stdio.h>
int main(){
	printf("\n\n\t Pointer Comparsion \n\n");
    int *pA;
    float *pB;
    pA=(int *)10;
    pB=(float *)20;
    if(pB>pA)
       printf("PtrB is greater than ptrA");
    printf("\n\n\t End of Program. ");
}
