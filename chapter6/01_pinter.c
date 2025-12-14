#include<stdio.h>

int main(){
    int i =33 ;
    int* j = &i;  // j is a pionter pointing to i 
    printf("The address of i is %p",&i); // normaly dekhle %p ar integear a dekhle %u
    return 0;
}