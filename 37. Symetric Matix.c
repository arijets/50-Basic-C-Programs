#include<stdio.h>
int main(){
	printf("\n\n\t Program to check for a sqare symetric matrix \n\n");
	int a[100][100],b[100][100],c,d,i,j;
	printf("Enter the diamension of the matrix - ");
	scanf("%d",&c);
	for(i=0;i<c;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<c;i++){
		for(j=0;j<c;j++){
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<c;i++){
		for(j=0;j<c;j++){
			if(a[i][j]!=b[i][j]){
				printf("\nMatrix is not Symetric.");
				exit(0);
			}
		}
	}
	printf("\nMatrix is Symetric.");
	printf("\n\n\t End of Program.");
	return 0;
}
