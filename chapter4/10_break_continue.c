#include <stdio.h>

int main()
{
    for (int i = 0; i <= 15; i++)
    {
        if(i==5){
            //break; // exit the loop !
            continue; // exit the iteration now mane holo ai condition ar sathe mila gele oi iteration mae block excute hbe na scip korbe okhane theke abar upure chole jabe 
        }
        printf("i is %d\n", i);
    }
    printf("for loop is done");
    return 0;
}