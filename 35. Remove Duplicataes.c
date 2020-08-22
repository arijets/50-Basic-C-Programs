#include<stdio.h>
int main(){
	printf("\n\n\t Remove Duplicate Array elements \n\n");
	int a,c[100],i,j,k,temp=0;
	printf("How to elements you want to input? ");
	scanf("%d",&a);
	printf("\nPlease input the array - \n");
	for(i=0;i<=a-1;i++)
		scanf("%d",&c[i]);
	for(i=0;i<a;i++){
		for(j=i+1;j<a;j++){
			if(c[j]==c[i]){
				temp++;
				for(k=j;k<a;k++)
					c[j]=c[j+1];
			}
		}
	}
	printf("\nThe array is - \n");
	for(i=0;i<a-temp;i++){
		printf("%d\n",c[i]);
	}
	printf("\n\n\t End of Programing.");
}
