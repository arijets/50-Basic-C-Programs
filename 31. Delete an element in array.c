#include<stdio.h>
int main(){
	printf("\n\n\t Delete an element in Array \n\n");
	int a,b,c[100],i,e;
	printf("How to elements you want to input? ");
	scanf("%d",&a);
	printf("\nPlease input the array - \n");
	for(i=0;i<=a-1;i++){
		scanf("%d",&c[i]);
	}
	printf("\nThe the position where you want to delete\n");
	scanf("%d",&b);
	for(i=b-1;i<=a-1;i++){
		c[i]=c[i+1];
	}
	printf("\nThe array is - \n");
	for(i=0;i<=a-2;i++){
		printf("%d\n",c[i]);
	}
	printf("\n\n\t End of Programing.");
}
