#include<stdio.h>
int main(){
	printf("\n\n\t Program Name - Swithch Case with Break statement\n\n");
	char g;
	char b;
	printf("Enter the Grade - ");
	scanf("%c",&g);
	switch(g){
		case 'A':
			printf("\nGrade is A. And You have done Excellent.");
			break;
		case 'B':
			printf("\nGrade is B. Keep it up!");
			break;
		case 'C':
			printf("\nYour Grade is C. Well Done.");
			break;
		case 'D':
			printf("\nYour Grade is D. You just passed!");
			break;
		case 'F':
			printf("\nYour Grade is F. You Failed!!");
			break;
		default:
			printf("\nInvalid Grade!!");
			break;
	}
	printf("\n\n\t End of Program");
}
