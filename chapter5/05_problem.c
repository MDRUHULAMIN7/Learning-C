#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++); //printf ar modhe jokhon akoi variable akadhik bar print kora hoi tokhon right theke left ar dika print hoi !! ata compiler ar evualation order ar opor nirvor kore je print left right hbe naki right to left hbe !!
    // left to right = 4 5 5
    // right to left = 6 6 4
    return 0;
}
/*What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++);*/