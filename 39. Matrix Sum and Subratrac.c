#include<stdio.h>
int main(){
    printf("\n\n\t Addition and Substraction of Matrix \n\n");
    int n,m,c,d,first[100][100],second[100][100],sum[100][100],diff[100][100];
    printf("Enter the number of rows and columns of the first matrix - \n");
    scanf("%d%d",&m,&n);
    printf("\nEnter the first matrix - \n");
    for(c=0;c<m;c++)
        for(d=0;d<n;d++)
            scanf("%d",&first[c][d]);
    printf("\nEnter the second matrix - \n");
    for(c=0;c<m;c++)
        for(d=0;d<n;d++)
            scanf("%d",&second[c][d]);
    for(c=0;c<m;c++)
        for(d=0;d<n;d++)
            sum[c][d]=first[c][d]+second[c][d];
    printf("\nThe sum of the two entered matrices is: \n");
    for(c=0;c<m;c++){
        for(d=0;d<n;d++){
            printf("%d\t",sum[c][d]);
        }
        printf("\n");
    }
    for(c=0;c<m;c++)
        for(d=0;d<n;d++)
            diff[c][d]=first[c][d]-second[c][d];
    printf("\nThe subtraction of the two entered matrices is: \n");
    for(c=0;c<m;c++){
        for(d=0;d<n;d++){
            printf("%d\t",diff[c][d]);
        }
        printf("\n");
    }
    printf("\n\n\t End of Program.");
}
