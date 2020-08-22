#include<stdio.h>
int main(){
	printf("\n\n\t Basic For loop Program \n\n");
	int i=0,j;
	printf("Enter the number of time you want to apply the loop - ");
	scanf("%d",&j);
	for(i=0;i<=j;i++){
		printf("\nLoop is running %d time",i);
	}
	printf("\nThe value of i is now %d",i);
	printf("\n\n\t End of the Program.");
	return 0;	
}
