 #include<stdio.h>
 
 int main(){
    int marks[90]; // reserve space to to 90 integers 0 to 89 
    marks[1] = 55;
    marks[0] = 44;

    printf("The mark of mark 1 and mark 0 %d and %d",marks[1],marks[0]);
    return 0;
 }