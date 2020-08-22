#include<stdio.h>
int main(){
	printf("\n\n\t Find out the Factors of a number. \n\n");
	int a,b,i;
	printf("Enter the number - ");
	scanf("%d",&a);
	for(i=1;i<a;i++){
		//printf("%d\t",&i);
		if(a%i==0){
			printf("\n%d\t",i);
		}
	}
	printf("\n\n\t End of Program.");
}
