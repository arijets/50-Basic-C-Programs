#include<stdio.h>
int main(){
	printf("\n\n\t Find exponential. \n\n");
	int a,b,c,value=1;
	printf("Enter the number and the exponential - \n");
	scanf("%d%d",&b,&c);
	a=c;
	while(c>0){
		value=value*b;
		c--;
	}
	printf("The value of %d^%d = %d",b,a,value);
	printf("\n\n\t End of Programing.");
}
