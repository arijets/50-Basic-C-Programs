#include<stdio.h>
int main(){
	printf("\n\n\t Find largest and smallest element in an Array \n\n");
	int a,big,c[100],i,small;
	printf("How to elements you want to input? ");
	scanf("%d",&a);
	printf("\nPlease input the array - \n");
	for(i=0;i<=a-1;i++){
		scanf("%d",&c[i]);
	}
	big=c[0];
	for(i=1;i<=a-1;i++){
		if(big<c[i])
			big=c[i];
	}
	small=c[0];
	for(i=1;i<=a-1;i++){
		if(small>c[i])
			small=c[i];
	}
	printf("Big = %d and Small = %d",big,small);	
}
