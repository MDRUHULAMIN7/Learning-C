#include <stdio.h>

int main()
{
    char ch = '.';
    printf("The character is %c \n", ch);
    printf("the Ascii value character is %d\n", ch);
    // 97 - 122 ar modhe ascii value small letter na hole capital letter

    if (ch >= 97 && ch <= 122)
    {
        printf("The Character is Lowercase");
    }
    else
    {
        printf("The Character is not Lowercase");
    }
    return 0;
}