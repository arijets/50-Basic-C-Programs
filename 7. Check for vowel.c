#include<stdio.h>
int main(){
	printf("\n\n\t Program to Check charecter is Vowle or Not \n\n");
	char a;
	printf("Enter the charecter - ");
	scanf("%c",&a);
	switch(a){
		case 'a':
			printf("\n%c is a vowel.",a);
			break;
		case 'e':
			printf("\n%c is a vowel.",a);
			break;
		case 'i':
			printf("\n%c is a vowel.",a);
			break;
		case 'o':
			printf("\n%c is a vowel.",a);
			break;
		case 'u':
			printf("\n%c is a vowel.",a);
			break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("\n%c is a vowel.",a);
			break;
		default:
			printf("\n%c is not a vowel.",a);
	}
	printf("\n\n\t End of Code");
}
