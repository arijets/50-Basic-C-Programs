#include<stdio.h>
int main(){
	printf("Basic While Loop Program");
	int i,j=0;
	printf("Enter the number of time you want this loop to run - ");
	scanf("%d",&i);
	while(j!=i){
		printf("\nLoop is running at %d time",j);
		j++;
	}
	printf("\nThe value of j at the end of the loop is - %d",j);
	printf("\n\n\t End of the program.");
	return 0;	
}
