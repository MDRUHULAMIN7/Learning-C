#include <stdio.h>

int main()
{
    int r, t;
    float p = 34.1;
    r = 8;
    t = 5;

    printf("The Interst of %f in rate of %d in %d is %f", p, r, t, ((p * r * t) / 100));
    return 0;
}

// Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest