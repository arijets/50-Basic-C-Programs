#include<stdio.h>
int main(){
	printf("\n\n\t Short Array elements \n\n");
	int a,c[100],i,j,temp;
	printf("How to elements you want to input? ");
	scanf("%d",&a);
	printf("\nPlease input the array - \n");
	for(i=0;i<=a-1;i++)
		scanf("%d",&c[i]);
	for(i=0;i<a;i++){
		for(j=i+1;j<a;j++){
			if(c[i]<c[j]){
				temp = c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}	
	}
	printf("\nShorted Array is -\n");
	for(i=0;i<=a-1;i++)
		printf("%d \t",c[i]);
	printf("\n\n\t End of Program.");
}
