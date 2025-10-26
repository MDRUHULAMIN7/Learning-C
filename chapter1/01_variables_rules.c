#include <stdio.h>

int main()
{

    // 1.Every variable must have a type before its name.
    int age;
    float price;
    char grade;

    // Variable names can contain letters, digits, and underscores (_)
    //    Example: my_number, totalAmount, roll_1

    //  Variable names CANNOT start with a digit.
    // Variable names are case-sensitive.
    //    Example: age, Age, and AGE are three different variables.

    //  You cannot use C keywords as variable names.
    //  int, float, if, return (these are reserved keywords)

    // Always initialize (assign a value) before using a variable.
    int number = 10;
    printf("Number = %d\n", number);

    // You can declare multiple variables of the same type in one line.
    int x = 5, y = 10, z = 15;
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
