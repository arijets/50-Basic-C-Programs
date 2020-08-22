#include<stdio.h>
int fact(int x){
	if(x==1||x==0)
		return 1;
	else
		return(x*fact(x-1));
}
int main(){
	printf("\n\n\t Facotrial using Recursion \n\n");
	int a,b;
	printf("Enter the number - ");
	scanf("%d",&a);
	b=fact(a);
	printf("\nThe result of the factorial is - %d",a);
	printf("\n\n\t End of Program. ");
}
