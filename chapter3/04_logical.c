#include <stdio.h>

int main()
{
    int a, b;
    a = 1;
    b = 0;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a and b is %d\n", a || b);
    printf("The value of not(a) %d\n", !a);
    printf("The value of not(b) %d\n", !b); // je operator true ke false false ke true banai take not operator bole

    return 0;
}