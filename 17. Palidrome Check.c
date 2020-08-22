#include<stdio.h>
int main(){
	printf("\n\n\t Plidrome Number Checking \n\n");
	int a,b,x,sum;
	sum=0;
	printf("Enter the number you want to check - ");
	scanf("%d",&a);
	b=a;
	while(b>0){
		x=b%10;
		sum=(sum*10)+x;
		b=b/10;
	}
	if(sum==a){
		printf("\nThe enterned number %d is palidrome",a);}
	else{
		printf("\nThe enterned number %d is not palidrome",a);
	}
	printf("\n\n\t End of Program. ");
}
