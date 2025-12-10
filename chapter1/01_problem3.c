#include<stdio.h>

int main(){
    float c ,f;
    printf("Enter Celcius degre to convert in farenhite \n");
    scanf("%f",&c);
    f = ((9.0/5.0)*c) +32 ;
    printf ("The value in farenhite is %f", f);
    return 0;
}

// Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit).