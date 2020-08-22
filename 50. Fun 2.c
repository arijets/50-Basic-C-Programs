#include<stdio.h>
#include<time.h>
int main(){
    time_t t;
    time(&t);
    printf("\nProgram writeen at (date and time): %s", ctime(&t));
}
