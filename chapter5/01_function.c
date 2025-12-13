#include <stdio.h>

// function prototype
int sum(int, int);

// function definitation
int sum(int x, int y)
{
    printf("The sum is %d\n", x + y);
    return x + y;
}
int main()
{
    int a = 1;
    int b = 2;
    int c = a + b;
    printf("The sum is %d\n", c);
    // function calling...........
    sum(a, b);
    int result = sum(12, 13);
    printf("Teh function result is %d\n", result);
    return 0;
}