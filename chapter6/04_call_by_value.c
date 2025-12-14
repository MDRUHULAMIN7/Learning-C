#include <stdio.h>

<<<<<<< HEAD
int sum(int, int);

int sum(int a, int b)
{
=======

int sum(int, int);


int sum(int a, int b){
>>>>>>> 5b0b91ff1f513b2f2a0360058f71541104db9411
    a = 6; // Sum function cannot change x using a because copy of x is provided to sum in a
    return a + b;
}

<<<<<<< HEAD
int main()
{
    int x = 1, y = 6;
=======
int main(){
    int x = 1, y=6;
>>>>>>> 5b0b91ff1f513b2f2a0360058f71541104db9411
    printf("The sum of 1 and 6 is %d\n", sum(x, y));
    printf("The value of x is %d", x);
    return 0;
}