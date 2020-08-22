#include<stdio.h>
int main(){
	printf("/n/n/t Odd Even Number Findoutvin range \n\n");
	int a,b,i,p;
	printf("Please Enter the Range of numbers - \n");
	scanf("%d\n%d",&a,&b);
	for(i=a;i<=b;i++){
		p=i;
		if(p%2==0){
			printf("\n%d number is Even",p);		
		}
		else
			printf("\n%d number is Odd",p);
	}
	printf("\n\n\t End of Program. ");	
}
