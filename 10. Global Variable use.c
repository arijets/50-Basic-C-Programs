#include<stdio.h>
int a, b;
int main(){
	printf("\n\n\t Largest and Smallest using Global Veriable \n\n");
	printf("Enter the two numbers - \n");
	scanf("%d%d", &a, &b);
	if(a==b){
		printf("\nBoth of the variables are equal. \n");
	}
	else if(a < b){
		printf("In a value %05d and b value %05d, \nthe a value %05d is lesser than b value %05d",a,b,a,b);
	}
	else{
		printf("In a value %05d and b value %05d, \nthe a value %05d is greater than b value %05d",a,b,a,b);
	}
	printf("\n\n\t End of the Program \n\n");
}
