#include<stdio.h>
int main(){
	printf("\n\n\t Sum of the Digits in a Number. \n\n");
	int a,b,c,sum;
	sum = 0;
	printf("Enter the number - ");
	scanf("%d",&a);
	b=a;
	while(b!=0){
		c=b%10;
		sum+=c;
		b=b/10;
	}
	printf("\nThe Sum of number is - %d",sum);
	printf("\n\n\t End of Program. ");
}
