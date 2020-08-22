#include<stdio.h>
int main(){
	printf("\n\n\t Reverser the Case of Input Charecter \n\n");
	char a;
	printf("Enter the charecter - ");
	a=getchar();
	putchar('\n');
	if(islower(a)){
		printf("The Reverse string is - ");
		putchar(toupper(a));
	}
	else{
		printf("\nThe Reverse string is - ");
		putchar(tolower(a));
	}
	printf("\n\n\t End of Program. ");
}
