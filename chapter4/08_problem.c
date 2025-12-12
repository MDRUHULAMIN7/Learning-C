#include<stdio.h>

int main(){
    //5! = 1 x 2 x 3 x 4 x 5 = 120 
    int factorial = 1 ;
    int n  ;
    printf("Enter The Number to Get it Factorial :");
    scanf("%d",&n);
    for (int i = 1 ; i <=n; i++)
    {
        factorial = factorial * i;
    }
    printf("%d",factorial);
    
    return 0;
}
/*
8. Write a program to calculate the factorial of a given number using a for loop.*/