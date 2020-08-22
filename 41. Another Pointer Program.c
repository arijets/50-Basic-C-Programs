#include <stdio.h>
int main(){
	printf("\n\n\t Another Pointer Program \n\n");
	int a[] = {100, 200, 300};
    int i,*c,d;
    c = a;
    d=3;
    for(i=0;i<d;i++){
        printf("\nAddress of var[%d] = %x",i,c);
        printf("\nValue of var[%d] = %d ",i,*c);
		c++;
    }
	printf("\n\n\t End of Program. ");
}
