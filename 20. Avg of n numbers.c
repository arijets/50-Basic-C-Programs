#include<stdio.h>
int main(){
	printf("\n\n\t Find average of N Numbers \n\n");
	int a,i,b,sum;
	float avg;
	printf("How many numbers do you want to average? \n");
	scanf("%d",&a);
	printf("Enter the numbers - \n");
	for(i=1;i<=a;i++){
		b=0;
		scanf("%d",&b);
		sum+=b;
	}
	avg=sum/a;
	printf("The average is - %f", avg);
	printf("\n\n\t End of Program.");
}
