#include<stdio.h>
int main(){
	printf("\n\n\t Find largest number in n input numbers.\n\n");
	int a,i,big,j;
	printf("Enter the total input number - ");
	scanf("%d",&a);
	big=0;
	for(i=1;i<=a;i++){
		printf("\nEnter the %d number - ",i);
		scanf("%d",&j);
		if(j>big){
			big=j;
		}
		else{
			big=big;
		}
	}
	printf("\nThe largest number is - %d",big);
	printf("\n\n\t End of Programing. ");
}
