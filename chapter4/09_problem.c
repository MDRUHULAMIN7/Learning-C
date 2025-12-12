#include<stdio.h>

int main(){
    int product = 1 ;
    int n = 6 ;
    int i = 1;
    while (i<=n)
    {
       product*=i;
       i++;
    }
        printf("The factorial of %d is %d\n", n, product);
    return 0;
}
/*
Write a program to calculate the factorial of a given number using a while loop.*/