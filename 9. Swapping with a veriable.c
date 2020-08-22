#include<stdio.h>
int main(){
	printf("\n\n\t Swapping two numbers using a temp variable \n\n");
	int a=0, b=0;
	int temp=0;
	printf("Enter two numbers - \n");
	scanf("%d%d",&a,&b);
	printf("The first number is %d and the second number is %d", a, b);
	//start swapping
	temp=b;
	b=a;
	a=temp;
	//end of swapping
	printf("\nAfter the swaping first number is %d and the second number is %d", a, b);
	printf("\n\n\t End of Program. ");
	return 0;
}
