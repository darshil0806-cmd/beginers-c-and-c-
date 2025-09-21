// Convert to octal by repeatedly dividing by 8

#include <stdio.h>

int main()
{
    int number, octal[20], i = 0, j;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        octal[i] = number % 8;
        number = number / 8;
        i++;
    }

    printf("Octal equivalent: ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }

    printf("\n");
    return 0;
}
