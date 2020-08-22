#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	printf("\n\n\t Reverse a string \n\n");
	char a[50];
	char b[50];
	int c,d,i;
	d=0;
	printf("Enter the string - ");
	scanf("%s", a);
	c=strlen(a);
	printf("%d",c);
	d=c-1;
	for(i=0;i<=c-1;i++){
		b[i]=a[d];
		//printf("%c", b[i]);
		d--;
	}
	printf("The reverse string is %s \n", b);
	printf("\n\n\t End of Program.");
}
