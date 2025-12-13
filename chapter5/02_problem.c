#include<stdio.h>

float c2f(float);
float c2f(float c){
   return ((9*c)/5) + 32 ;
}
int main(){
    float c = 45;
    printf("The celcius of %f in farenhite is %f\n",c,c2f(c));
    return 0;
}

/*2. Write a function to convert Celsius temperature into Fahrenheit.*/