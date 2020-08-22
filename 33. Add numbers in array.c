#include<stdio.h>
int main(){
	printf("\n\n\t Add numbers with an Array \n\n");
	int a,c[100],i,sum;
	sum=0;
	printf("How to elements you want to input? ");
	scanf("%d",&a);
	printf("\nPlease input the array - \n");
	for(i=0;i<=a-1;i++)
		scanf("%d",&c[i]);
	for(i=0;i<=a-1;i++)
		sum+=c[i];
	printf("\nSum of elements in array is - %d",sum);
	printf("\n\n\t End of Programing. ");	
}
