#include <stdio.h>
int main()
{
    char name[100];
    int i, times;
    printf("enter your name : ");
    scanf("%s", name); // Reads a word (no spaces)
    printf("how many times your name should be printed : ");
    scanf("%d", &times);
    for (i = 0; i < times; i++)
    {
        printf("%s\n", name);
    }
    return 0;
}