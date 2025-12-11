/*
. Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.

*/

#include <stdio.h>

int main()
{
    int mark1, mark2, mark3;
    printf("Enter marks1: \n");
    scanf("%d", &mark1);
    printf("Enter marks2: \n");
    scanf("%d", &mark2);
    printf("Enter marks3: \n");
    scanf("%d", &mark3);

    printf("The marks are %d %d and %d \n", mark1, mark2, mark3);
    if (mark1 < 33 || mark2 < 33 || mark3 < 33)
    {
        printf("You are failed in individual subject");
    }
    else if ((mark1 + mark2 + mark3) / 3 < 40)
    {
        printf("You are failed due less parcentage");
    }
    else
    {
        printf("You are Passed");
    }
    return 0;
}