#include<stdio.h>
int main(){
	printf("\n\n\t Program to Find Palidrome Numbers \n\n");
	int a,b,c,d,e;
	c=0; d=1;
	printf("Enter the number of terms you want to find the palidrome numbers - ");
	scanf("%d",&a);
	printf("The Palidrome numbers are - \n");
	if(a==1){
		printf("0");
		
	}
	else{
		while(b<a){
			e=c+d;
			if(c==0){
				printf("0\t1\t");
				b++;
				b++;
			}
			printf("%d \t",e);
			c=d;
			d=e;
			b++;		
		}
	}
}
