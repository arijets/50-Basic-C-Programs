#include<stdio.h>
int main(){
	printf("\n\n\t Nested for Loop Using to print a n*n Matrix \n\n");
	int a,b,c;
	printf("Enter the number of n - ");
	scanf("%d",&c);
	printf("\nOutput of the Matrix is - \n");
	for(a=0;a<c;a++){
		printf("\t\t");
		for(b=0;b<c;b++){
			printf("*  ");
		}
		printf("\n");
	}
	printf("\n\n\t End of Program. \n\n");
}
