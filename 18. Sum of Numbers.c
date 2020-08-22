#include<stdio.h>

int main()
{
	printf("\n\n\t Sum of digits in numbers \n\n");
	int n,sum,remainder;
	sum=0;
    printf("Enter the number you want to find the sum - ");
	scanf("%d", &n);
	while(n != 0){
    	remainder = n%10;
        sum += remainder;
    	n = n/10;
		}
	printf("\n The sum of the numbers are - %d", sum);
    printf("\n\n\t End of Programing. ");
}
