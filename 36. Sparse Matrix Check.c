#include<stdio.h>
int main(){
	printf("\n\n\t Checking for a SParse Matrix \n\n");
	int a[100][100],b,c,d,i,j;
	d=0;
	printf("Enter the number of rows and colums - ");
	scanf("%d%d",&b,&c);
	printf("Enter the matrix - \n");
	for(i=0;i<b;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[b][c]);
			if(a[b][c]==0)
				d++;
		}
	}
	if(d>(b*c)/2)
		printf("\nEntered Matrix is a sparse matrix.");
	else
		printf("\nEntered Matrix is not a sparse matrix");
	printf("\n\n\t End of Program. ");
}
