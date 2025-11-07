// Copy one string to another one
#include <stdio.h>
#include <string.h>

int main()
{
    char source[100], destination[100];

    printf("Enter a string: ");
    gets(source);

    strcpy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}
