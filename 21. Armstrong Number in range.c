#include<stdio.h>
int main(){
	printf("\n\n\t Find Armstrong Number \n\n");
	int a,b,i,j,sum,x;
	
	printf("Enter the range - \n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("\nThe armstrong numbers in the range are following - \n");
	for(i=a;i<=b;i++){
		j=i;
		sum = 0;
		while(j!=0){
		x=j%10;
		sum+=x*x*x;
		j=j/10;
	}
	if(sum==i){
		printf("%d\t",sum);}
	}
	printf("\n\n\t End of Program.");
}
