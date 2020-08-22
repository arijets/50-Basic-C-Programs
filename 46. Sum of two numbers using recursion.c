#include<stdio.h>
int x;
int sum(int a, int b){
	if(b==0)
		return a;
	x=sum(a,b-1)+1;
	return x;
}
int main(){
	printf("\n\n\t Adding two nmbers using recursion \n\n");
	int c,d,e;
	printf("Enter the two numbers - \n");
	scanf("%d%d",&c,&d);
	e=sum(c,d);
	printf("\nThe sum of two numbers - %d\n",e);
	printf("\n\n\t End of Program. ");
}
