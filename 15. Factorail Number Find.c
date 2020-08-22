#include<stdio.h>
int main(){
	printf("\n\n\t Program to Find the Factorial Number \n\n");
	int a,b,fact;
	printf("Enter the number to find the factorial number.\n");
	scanf("%d",&a);
	fact = a;
	for(b=1;b<a;b++){
		fact = fact*b;
	}
	printf("\nThe factorial for %d is %d", a, fact);
	printf("\n\n\t End of the Programing.");
}
