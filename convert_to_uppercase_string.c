//convert a string to upper case using built-in function
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a alphabetic string: ");
    gets(str);

    strupr(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}
