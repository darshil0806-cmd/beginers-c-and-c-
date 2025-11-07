//convert a string to lower case using built-in function
#include <stdio.h>          
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    strlwr(str);

    printf("Lowercase string: %s\n", str);

    return 0;
}
