#include<stdio.h>
int main(){
    printf("\n\n\t Swapping two numbers using Pointer\n\n");
    int a,b;
    int *pa,*pb;
    int temp;
    printf("Enter value for a: ");
    scanf("%d",&a);
    printf("\nEnter value for b: ");
    scanf("%d",&b);
    printf("\nThe values before swapping are: a = %d\tb = %d",a,b);
    pa=&a;
    pb=&b;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
    printf("\nThe values after swapping are: a = %d\tb = %d", a, b);
    printf("\n\n\t End of Programing. ");
}
