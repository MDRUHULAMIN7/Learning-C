#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    // do{
    //     sum = sum + i;
    //     i++;
    // }
    // while (i <= 10);
    for (; i <= 10; i++)
    {
        sum += i;
    }

    printf("The sum  %d\n", sum);

    return 0;
}

/*
6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop*/