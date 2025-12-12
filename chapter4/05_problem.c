#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum %d", sum);
    return 0;
}

/*

5. Write a program to sum first ten natural numbers using while loop.*/