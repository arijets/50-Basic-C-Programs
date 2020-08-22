#include<stdio.h>
void fibo(int );
int main(){
	printf("\n\n\t Fibonacci Series using recursion \n\n");
	int a,y=0,i;
	long int c=0,d=1;
	printf("Enter the length - ");
	scanf("%d",&a);
	prinf("\nThe fibinacci series is folowing - \n");
	for(i=1;i<=a;i++){
		printf("%da",fibo(y));
		y++;
	}
	printf("\n\n\t End of Program. ");
}
void fibo(int x){
	if(n==0||n==1)
		return n;
	else
		return(fibonacci(n-1)+fibonacci(n-2));
}
