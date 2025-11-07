// find out length of the string using built-in function
#include <stdio.h>
#include <string.h>  

int main()
{
    char str[100];
    int length;

    printf("Enter a string: ");
    gets(str); 

    length = strlen(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
