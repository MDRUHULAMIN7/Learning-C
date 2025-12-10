//  Write a C program to calculate area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.

#include<stdio.h>
int main(){
    // int length = 2 ;
    // int breath = 14; hardcoded input 

    int length , breath;

    printf("Enter length\n");
    scanf("%d",&length);

    printf("Enter breath\n");
    scanf("%d",&breath);

    printf("The Area of rectangler is %d", length * breath);
    return 0;
}