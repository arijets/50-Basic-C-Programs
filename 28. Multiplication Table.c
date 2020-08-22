#include<stdio.h>
int main(){
	printf("\n\n\t Multiplication Table Print \n\n");
	int a,b,i;
	printf("Enter the number - ");
	scanf("%d",&a);
	for(i=0;i<=100;i++){
		b=0;
		b=a*i;
		printf("\n%d*%d = %d",i,a,b);
	}
	printf("\n\n\t End of Program.");
}
