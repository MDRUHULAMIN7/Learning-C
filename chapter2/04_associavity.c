#include<stdio.h>

int main(){
    int a ,b ,c ;
     a = 3 ;
     b = 6 ;
     c = 9 ;
     printf("the value is %d\n", a * b / c + 6);
     printf("the value is %d",3*b/2*c + 6*a); // ans will 99
     /* The following table lists the operator priority in C
 Priority Operators

1st * / %
2nd + -
3rd =

sei hisabe first a * / % ar kaj hbe tarpor + - ar kaj hbe then = ar kaj hbe 

3*b/2*c + 6*a 
3*b/2*c + 18 
18/2*c + 18 
9*c + 18 
81 + 18 
99 
hurray ans is write 
*/
    return 0;
}