#include<stdio.h>
int main(){
	printf("\n\n\t Find First n Prime numbers. \n\n");
	int a,b,c,sum,j,i,count;
	sum = 0;
	printf("Enter the number of prime number you want to find - ");
	scanf("%d",&a);
	for(count=1;count<=a;i++){
		printf("i=%d\tcount=%d",i,count);
		for(j=1;j<i;j++){
			if(i%j==0){
				break;
			}
		}
	if(j==i){
		printf("%d",j);
		count++;
	}
	}
	printf("\n\n\t End of Programing. ");
}
