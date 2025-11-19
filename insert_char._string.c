// write a function to insert a character at a specific position in a string
#include <stdio.h>
#include <string.h>

void insert_char(char *str, char c, int position)
{
    int len = strlen(str);
    for (int i = len; i >= position; i--)
    {
        str[i + 1] = str[i];
    }
    str[position] = c;
}

int main()
{
    char str[100] = "Hello World";
    char c = 'X';
    int position = 5;

    printf("Original string: %s\n", str);
    insert_char(str, c, position);
    printf("String after insertion: %s\n", str);

    return 0;
}