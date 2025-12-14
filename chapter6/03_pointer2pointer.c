#include <stdio.h>

int main(){
    int i = 6;
    int* j = &i; // akhane j holo pointer je i ar address store korse 
<<<<<<< HEAD
    int** k = &j; // akhane k addrees j ar o adress store korse 
=======
    int** k = &j;
>>>>>>> 5b0b91ff1f513b2f2a0360058f71541104db9411


    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));

    return 0;
}
