#include <stdio.h>

int main()
{
    int age = 44;

    if (age > 58)
    {
        printf("You can drive and you are sr citizen");
    }
    else if (age > 38)
    {
        printf("you can  drive and you are elder");
    }
    else if (age > 18)
    {
        printf("you can  drive");
    }
    else
    {
        printf(" you can not drive you are under age");
    }
    return 0;
}