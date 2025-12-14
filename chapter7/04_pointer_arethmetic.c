#include<stdio.h>

int main(){
    // pointer arethmetic using integer pointer
    // int a = 5 ; 
    // int* ptr = &a;
    // printf ("the address of a is %u\n",&a);
    // printf ("the address of a is %u\n",ptr);
    // ptr++; // integer jehutu 4 bytes memory jaiga nei tai 4 kore barbe 
    //  printf ("the value of ptr is %u\n",ptr);
    // pointer arethmetic using char pointer
    char a = '5' ; 
    char* ptr = &a;
    printf ("the address of a is %u\n",&a);
    printf ("the address of a is %u\n",ptr);
    ptr++; //char jehutu 1 bytes memory jaiga nei tai 1 kore barbe 
     printf ("the value of ptr is %u\n",ptr);
    return 0;
}