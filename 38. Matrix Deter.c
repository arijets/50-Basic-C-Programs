#include<stdio.h>
int main(){
    printf("\n\n\t\ 2*2 Matrix Determation \n\n");
    int a[2][2],i,j;
    long d;
    printf("Enter the array - \n");
    for(i = 0; i < 2; i++)
    for(j = 0; j < 2; j++)
    scanf("%d", &a[i][j]);
    d = a[0][0]*a[1][1] - a[1][0]*a[0][1];
    printf("\n Result is : %d - %d =  %d",a[0][0]*a[1][1],a[1][0]*a[0][1],d);
    printf("\n\n\t End of Program \n\n");
}
