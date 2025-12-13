#include <stdio.h>

int factorial(int);

// Factorial(5) = 1x2x3x4x5
// Factorial(4) = 1x2x3x4
// Factorial(3) = 1x2x3
// Factorial(n) = 1x2x3....x n-1 x n
// Factorial(n-1) = 1x2x3....x n-1
int factorial(int n)
{
    // Factorial(n) = Factorial(n-1) x n
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}
int main()
{
    int a = 6;
    printf("The factorial of %d is %d\n", a, factorial(a));

    return 0;
}