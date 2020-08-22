#include<stdio.h>
int main(){
	printf("\n\n\t Basic Do While Loop \n\n");
	int i,j=1;
	printf("How many times you want to repeat a line?\n");
	scanf("%d",&i);
	do{
		printf("\nRepeat no - %d",j);
		j++;
	}
	while(i>=j);
	printf("\n\n\t End of the Program.");
}
