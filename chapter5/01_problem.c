#include<stdio.h>

float avarage(int a,int b,int c);

float avarage(int a,int b,int c){
    return (a+b+c)/3.0;
}
int main(){
    int a =3 ,b = 6 , c =8 ;
    printf("the avarage of a , b,c is %f\n",avarage(a,b,c));
    
    return 0;
}
/*
1. Write a program using function to find average of three numbers.*/