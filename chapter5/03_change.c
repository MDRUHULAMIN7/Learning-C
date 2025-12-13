#include <stdio.h>

// function prototype
int change(int);

// function definitation
int change(int x)
{
    x = 94;
    printf("The x is %d\n", x); // aiihane b ar mane asche kintu seta copy jar karone function ar vitore value change holew asole value change hoina
    return x ;
}
int main()
{

    int b = 44;
    change(b);
    printf("The b is %d\n", b);
    
    return 0;
}