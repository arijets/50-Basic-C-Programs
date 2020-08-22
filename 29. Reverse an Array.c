#include<stdio.h>
int main(){
	printf("\n\n\t Reverse an Array \n\n");
	int a,b,c[100],d[100],i,e;
	printf("How to elements you want to input? ");
	scanf("%d",&a);
	printf("\nPlease input the array - \n");
	for(i=0;i<=a-1;i++){
		scanf("%d",&c[i]);
	}
	e=a-1;
	i=0;
	while(i<=a){
		d[e]=c[i];
		i++;
		e--;
	}
	printf("\nThe reverse array is - \n");
	for(i=0;i<=a-1;i++){
		printf("%d\n",d[i]);
	}
	printf("\n\n\t End of Program. ");
}
