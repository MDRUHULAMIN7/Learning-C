#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i); // 5
    i = i + 5;
    printf("The value of i is %d\n", i);   // 10
    i++;                                   // aikhane prothome i value age print hobe tar pore valu barbe ++ hobe 
    printf("The value of i is %d\n", i);   // 11
    printf("The value of i is %d\n", i++); // 11
    printf("The value of i is %d\n", i);   // 12
    ++i;                                   // aikhane prothome i ar value age  valu barbe ++ hobe tarpor print hobe
    printf("The value of i is %d\n", i);   // 13
    printf("The value of i is %d\n", ++i); // 14

    i +=2; // same as i = i + 2 ;
    printf("The value of i is %d\n", i); // 16
    /*
    The value of i is 5
    The value of i is 10
    The value of i is 11
    The value of i is 11
    The value of i is 12
    The value of i is 13
    The value of i is 14
    The value of i is 16
*/
    return 0;
}